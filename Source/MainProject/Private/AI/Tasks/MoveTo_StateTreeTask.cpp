// Lazy Pixel. All Rights Reserved.

#include "AI/Tasks/MoveTo_StateTreeTask.h"

#include "AIController.h"
#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "Tasks/AITask_MoveTo.h"
#include "GameplayTask.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


bool FMoveTo_StateTreeTask::Link(FStateTreeLinker& Linker)
{
    Linker.LinkExternalData(ActorHandle);
    return true;
}

EStateTreeRunStatus FMoveTo_StateTreeTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	AAIController* AIController = Cast<AAIController>(Context.GetOwner());
	if (!IsValid(AIController))
	{
		return EStateTreeRunStatus::Failed;		
	}
	
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);

	InstanceData.MoveToTask = UAITask_MoveTo::AIMoveTo(
		AIController, 
		FVector(), 
		InstanceData.GoalActor,
        -1.f, 
		EAIOptionFlag::Default, 
		EAIOptionFlag::Default, 
		true,
        false, 
		false, 
		EAIOptionFlag::Default);
	
	if (!InstanceData.MoveToTask.IsValid())
	{
		return EStateTreeRunStatus::Failed;
	}

	InstanceData.MoveToTask->ConditionalPerformMove();
	
	AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    GetCharacter(Context)->GetCharacterMovement()->MaxWalkSpeed = InstanceData.DefaultWalkSpeed;

	return EStateTreeRunStatus::Running;
}

EStateTreeRunStatus FMoveTo_StateTreeTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
    FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    ACharacter* pCharacter = GetCharacter(Context);

    const float Distance = FVector::Distance(InstanceData.GoalActor->GetActorLocation(), pCharacter->GetActorLocation());   
    if (Distance < InstanceData.PrepareRadius)
    {
        pCharacter->GetCharacterMovement()->MaxWalkSpeed = InstanceData.AttackWalkSpeed;
        return EStateTreeRunStatus::Succeeded;
    }

    if (!InstanceData.MoveToTask.IsValid())
    {
        return EStateTreeRunStatus::Failed;
    }

    if (InstanceData.MoveToTask->IsFinished())
    {
        return InstanceData.MoveToTask->GetMoveResult() == EPathFollowingResult::Type::Success ? EStateTreeRunStatus::Succeeded
                                                                                               : EStateTreeRunStatus::Failed;
    }

    return EStateTreeRunStatus::Running;
}

void FMoveTo_StateTreeTask::ExitState(FStateTreeExecutionContext& Context,
	const FStateTreeTransitionResult& Transition) const
{
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
	if (InstanceData.MoveToTask.IsValid() && !InstanceData.MoveToTask->IsFinished())
	{
		InstanceData.MoveToTask->ExternalCancel();
	}
}

ACharacter* FMoveTo_StateTreeTask::GetCharacter(FStateTreeExecutionContext& Context) const
{
    AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    return Cast<ACharacter>(&ReferenceActor);
}
