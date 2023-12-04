// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

class UPlayerMovementComponent;
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
    UPROPERTY()
    ABaseWeapon* m_pWeapon;
    bool m_bIsComboChain = false;
    uint8 m_nComboIndex = 0;

    void SpawnWeapon();
    void InitAnimations();
    void MeleeAttack();
    void PlayMeleeAttackAnim();

    void OnStartAttackState(USkeletalMeshComponent* MeshComp);
    void OnEndAttackState();
    void OnNextComboSection();

    UFUNCTION()
    void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

    UPlayerMovementComponent* GetPlayerMovementComponent() const;
};
