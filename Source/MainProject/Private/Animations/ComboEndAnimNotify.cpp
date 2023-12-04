// Lazy Pixel. All Rights Reserved.


#include "Animations/ComboEndAnimNotify.h"

void UComboEndAnimNotify::Notify(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    FOnComboEndNotify.Broadcast();
    Super::Notify(MeshComp, Animation, EventReference);
}
