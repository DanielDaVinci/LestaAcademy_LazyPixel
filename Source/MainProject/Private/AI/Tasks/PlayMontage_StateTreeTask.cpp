// Lazy Pixel. All Rights Reserved.

#include "AI/Tasks/PlayMontage_StateTreeTask.h"

#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "GameFramework/Character.h"


bool FPlayMontage_StateTreeTask::Link(FStateTreeLinker& Linker)
{
    Linker.LinkExternalData(ActorHandle);
    return true;
}

EStateTreeRunStatus FPlayMontage_StateTreeTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	const FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
	
    GetCharacter(Context)->PlayAnimMontage(InstanceData.AnimMontage, InstanceData.AnimMontage->GetPlayLength() / InstanceData.AnimationTime);

	return EStateTreeRunStatus::Running;
}

EStateTreeRunStatus FPlayMontage_StateTreeTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
    const FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    ACharacter* pCharacter = GetCharacter(Context);

	if (InstanceData.GoalActor && InstanceData.isNeedRotation)
        pCharacter->SetActorRotation((InstanceData.GoalActor->GetActorLocation() - pCharacter->GetActorLocation()).Rotation());

    if (pCharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
        return EStateTreeRunStatus::Running;

    return EStateTreeRunStatus::Succeeded;
}

ACharacter* FPlayMontage_StateTreeTask::GetCharacter(FStateTreeExecutionContext& Context) const
{
    AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    return Cast<ACharacter>(&ReferenceActor);
}
