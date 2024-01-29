// Lazy Pixel. All Rights Reserved.


#include "Animations/RangeAttackNotify.h"
#include "GameFramework/Character.h"
#include "Character/Player/Components/PlayerMovementComponent.h"

void URangeAttackNotify::Notify(
    USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
    FOnRangeAttackNotify.Broadcast(MeshComp);
    Super::Notify(MeshComp, Animation, EventReference);
}
