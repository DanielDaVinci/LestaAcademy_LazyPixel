// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RangeAttackNotify.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnRangeAttackNotifySignature, USkeletalMeshComponent*);

UCLASS()
class MAINPROJECT_API URangeAttackNotify : public UAnimNotify
{
	GENERATED_BODY()
	
public:
    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

    FOnRangeAttackNotifySignature FOnRangeAttackNotify;
};
