// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class MAINPROJECT_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
    
public:
    ABaseWeapon();

    void SetDamage(const float fDamage) { damage = fDamage; }
    float GetDamage() const { return damage; }
    float GetAttackSpeed() const { return attackSpeed; }
    float GetRange() const { return range; }

    UAnimMontage* GetAttackMontage() { return attackAnimation; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties", meta=(ClampMin="0.0"))
    float damage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponProperties", meta = (ClampMin = "0.0", ClampMax = "10.0"))
    float attackSpeed = 1;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties", meta=(ClampMin="0.0"))
    float range = 2000.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
    UAnimMontage* attackAnimation;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="SceneComponent")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="WeaponMeshComponent")
    USkeletalMeshComponent* pWeaponMeshComponent;
};
