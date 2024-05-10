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

    void SetDamage(const float Damage) { damage = Damage; }
    float GetDamage() const { return damage; }
    
    float GetAttackSpeed() const { return attackSpeed; }
    float GetRange() const { return range; }

    //UAnimMontage* GetAttackMontage() const { return attackAnimation; }
    UAnimMontage* GetAttackMontage() const { return attackAnimations.IsEmpty() ? nullptr : attackAnimations[0]; }
    TArray<UAnimMontage*> GetAttackMontages() const { return attackAnimations; }

    void DisableMeshCollision() const;
    void EnableMeshCollision() const;

    void Detach();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="SceneComponent")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="WeaponMeshComponent")
    USkeletalMeshComponent* pWeaponMeshComponent;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Properties", meta=(ClampMin="0.0"))
    float damage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (ClampMin = "0.0", ClampMax = "10.0"))
    float attackSpeed = 1;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon Properties", meta=(ClampMin="0.0"))
    float range = 2000.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties|Animation")
    TArray<UAnimMontage*> attackAnimations;

protected:
    void GiveDamage(AActor* DamageTaker);
};
