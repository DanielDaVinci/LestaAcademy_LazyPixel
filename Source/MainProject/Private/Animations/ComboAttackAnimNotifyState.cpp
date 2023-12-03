// Lazy Pixel. All Rights Reserved.

#include "Animations/ComboAttackAnimNotifyState.h"

void UComboAttackAnimNotifyState::NotifyBegin(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
    FOnComboWindowStartNotify.Broadcast();
    Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
}

void UComboAttackAnimNotifyState::NotifyEnd(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    FOnComboWindowEndNotify.Broadcast();
    Super::NotifyEnd(MeshComp, Animation, EventReference);
}
