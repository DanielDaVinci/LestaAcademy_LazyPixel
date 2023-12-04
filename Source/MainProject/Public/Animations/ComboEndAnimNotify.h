// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ComboEndAnimNotify.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnComboEndSignature);

UCLASS()
class MAINPROJECT_API UComboEndAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
public:
    virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	FOnComboEndSignature FOnComboEndNotify;
};
