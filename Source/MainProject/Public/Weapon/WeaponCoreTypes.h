#pragma once

#include "WeaponCoreTypes.generated.h"

USTRUCT(BlueprintType)
struct FComboElement
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    FName attackSectionName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.0", ClampMax = "5.0"))
    float sectionRateScale;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    TEnumAsByte<ERootMotionMode::Type> rootMotionMode;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
    float damage = 50.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float deceleration = 0.0;
};