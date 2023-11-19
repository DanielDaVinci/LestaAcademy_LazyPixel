// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class ABaseWeapon;
class ABaseCharacter;
class ABasePlayerController;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UWeaponComponent();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TSubclassOf<ABaseWeapon> WeaponClass;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    FName WeaponAttachPointName = "rhWeaponSocket";

    UPROPERTY(EditDefaultsOnly, Category = "Animation")
    UAnimMontage* pLightAttackAnimMontage;

	virtual void BeginPlay() override;
	
private:
    ABasePlayerController* m_pPlayerController; 
    ABaseCharacter* m_pCharacter;
    ABaseWeapon* m_pWeapon;

    bool GetCharacter();
    bool GetController();
    void SpawnWeapon();
    void InitAnimations();
    void LightAttack();
    void PlayAnimMontage(UAnimMontage* Montage);
};
