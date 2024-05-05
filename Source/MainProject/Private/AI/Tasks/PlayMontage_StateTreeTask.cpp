// Lazy Pixel. All Rights Reserved.

#include "AI/Tasks/PlayMontage_StateTreeTask.h"

#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"


bool FPlayMontage_StateTreeTask::Link(FStateTreeLinker& Linker)
{
    Linker.LinkExternalData(ActorHandle);
    return true;
}

EStateTreeRunStatus FPlayMontage_StateTreeTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	const FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    ABaseCharacter* pCharacter = GetCharacter(Context);

    const auto pSword = pCharacter->GetBaseWeaponComponent()->FindWeapon<ASword>();
    pSword->SetDamage(InstanceData.Damage);
    pCharacter->PlayAnimMontage(InstanceData.AnimMontage, InstanceData.AnimMontage->GetPlayLength() / InstanceData.AnimationTime);

	return EStateTreeRunStatus::Running;
}

EStateTreeRunStatus FPlayMontage_StateTreeTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
    const FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
    ABaseCharacter* pCharacter = GetCharacter(Context);

	if (InstanceData.GoalActor && InstanceData.isNeedRotation)
        pCharacter->SetActorRotation((InstanceData.GoalActor->GetActorLocation() - pCharacter->GetActorLocation()).Rotation());

    if (pCharacter->GetMesh()->GetAnimInstance()->IsAnyMontagePlaying())
        return EStateTreeRunStatus::Running;

    return EStateTreeRunStatus::Succeeded;
}

ABaseCharacter* FPlayMontage_StateTreeTask::GetCharacter(FStateTreeExecutionContext& Context) const
{
    AActor& ReferenceActor = Context.GetExternalData(ActorHandle);
    return Cast<ABaseCharacter>(&ReferenceActor);
}
