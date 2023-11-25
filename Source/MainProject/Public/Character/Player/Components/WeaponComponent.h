// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class ABaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWeaponComponent();

    UFUNCTION()
    void DisableMeleeCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<ABaseWeapon> WeaponClass;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponAttachPointName = "rhWeaponSocket";

	virtual void BeginPlay() override;

private:
    ABaseWeapon* m_pWeapon;

    void SpawnWeapon();
    void InitAnimations();
    void LightAttack();
};
