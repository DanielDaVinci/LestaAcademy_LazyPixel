// Lazy Pixel. All Rights Reserved.

#include "AI/Tasks/Attack_StateTreeTask.h"

#include "AIController.h"
#include "StateTreeExecutionContext.h"
#include "VisualLogger/VisualLogger.h"
#include "StateTreeLinker.h"
#include "Tasks/AITask_MoveTo.h"
#include "GameplayTask.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"


bool FAttack_StateTreeTask::Link(FStateTreeLinker& Linker)
{
    Linker.LinkExternalData(ActorHandle);
    return true;
}

EStateTreeRunStatus FAttack_StateTreeTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
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

	return EStateTreeRunStatus::Running;
}

EStateTreeRunStatus FAttack_StateTreeTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
    FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    ABaseCharacter* pCharacter = Cast<ABaseCharacter>(&ReferenceActor);
    
    //const float Distance = FVector::Distance(InstanceData.GoalActor->GetActorLocation(), pCharacter->GetActorLocation());
   
    if (!pCharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying() && 
       /* Distance < InstanceData.AttackRadius &&*/
        InstanceData.Combo.IsValidIndex(InstanceData.index))
    {
        const auto pSword = pCharacter->GetBaseWeaponComponent()->FindWeapon<ASword>();
        pSword->SetDamage(InstanceData.Combo[InstanceData.index].Damage);
        pCharacter->PlayAnimMontage(InstanceData.Combo[InstanceData.index].AnimMontage,
            InstanceData.Combo[InstanceData.index].AnimMontage->GetPlayLength() / InstanceData.Combo[InstanceData.index].AnimationTime);

        InstanceData.index++;
    }

    if (InstanceData.index >= InstanceData.Combo.Num() && !pCharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
    {
        InstanceData.index = 0;
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

void FAttack_StateTreeTask::ExitState(FStateTreeExecutionContext& Context,
	const FStateTreeTransitionResult& Transition) const
{
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
	if (InstanceData.MoveToTask.IsValid() && !InstanceData.MoveToTask->IsFinished())
	{
		InstanceData.MoveToTask->ExternalCancel();
	}
}
