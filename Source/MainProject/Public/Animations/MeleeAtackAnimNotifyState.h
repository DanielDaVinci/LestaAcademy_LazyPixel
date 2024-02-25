// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MeleeAtackAnimNotifyState.generated.h"


DECLARE_MULTICAST_DELEGATE_OneParam(FOnMeleeAttackNotifySignature, USkeletalMeshComponent*);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMeleeAttackEndSignature, USkeletalMeshComponent*);

UCLASS()
class MAINPROJECT_API UMeleeAttackAnimNotifyState : public UAnimNotifyState
{
    GENERATED_BODY()

public:
    virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
    virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

    FOnMeleeAttackNotifySignature FOnMeleeAttackNotify;
    FOnMeleeAttackEndSignature FOnMeleeAttackEndNotify;
};
