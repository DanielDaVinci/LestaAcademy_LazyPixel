#pragma once

#include "WeaponCoreTypes.generated.h"

USTRUCT(BlueprintType)
struct FComboElement
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    FName AttackSectionName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.0", ClampMax = "5.0"))
    float SectionRateScale;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.0"))
    float AnimationTime = 0.5f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Animation")
    TEnumAsByte<ERootMotionMode::Type> RootMotionMode;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
    float Damage = 50.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float Deceleration = 0.0;
};

USTRUCT(BlueprintType)
struct FProjectileProperties
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile Properties", meta = (ClampMin = "0.0"))
    float damage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile Properties")
    TEnumAsByte<ECollisionChannel> projType;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile Properties")
    FLinearColor trailColor;
};