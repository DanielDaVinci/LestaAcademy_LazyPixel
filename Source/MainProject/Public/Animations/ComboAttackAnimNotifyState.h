// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ComboAttackAnimNotifyState.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnComboAttackDamageSignature);

UCLASS()
class MAINPROJECT_API UComboAttackAnimNotifyState : public UAnimNotifyState
{
    GENERATED_BODY()

public:
    virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
    virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

    FOnComboAttackDamageSignature FOnComboWindowStartNotify;
    FOnComboAttackDamageSignature FOnComboWindowEndNotify;
};
