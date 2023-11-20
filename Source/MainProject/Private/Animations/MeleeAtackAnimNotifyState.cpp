// Lazy Pixel. All Rights Reserved.


#include "Animations/MeleeAtackAnimNotifyState.h"

void UMeleeAttackAnimNotifyState::NotifyBegin(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
    FOnMeleeAttackNotify.Broadcast();
    Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
}

void UMeleeAttackAnimNotifyState::NotifyEnd(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    FOnMeleeAttackNotify.Broadcast();
    Super::NotifyEnd(MeshComp, Animation, EventReference);
}
