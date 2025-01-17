// © 2021, Brock Marsh. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DismemberedAnimInstance.generated.h"

/**
 *		This is an Anim Instance for the Dismembered limbs. This
 *		will handle copying the pose from the parent skeleton and
 *		applying the control rig.
 */

UCLASS(Blueprintable)
class DISMEMBERMENTSYSTEM_API UDismemberedAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
	FName Limb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
	FName PelvisBoneName;
};
