// Fill out your copyright notice in the Description page of Project Settings.

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

    int GetDamage() const { return damage; }
    float GetAttackSpeed() const { return attackSpeed; }
    float GetRange() const { return range; }
    
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    int damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    float attackSpeed;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WeaponProperties")
    float range;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Animation")
    TSubclassOf<UAnimMontage> attackAnimationClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="SceneComponent")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="StaticMeshComponent")
    UStaticMeshComponent* pStaticMeshComponent;
    
};
