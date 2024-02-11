// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "WeaponComponent.generated.h"

class UPlayerMovementComponent;
class AGun;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWeaponComponent : public UBaseWeaponComponent
{
	GENERATED_BODY()

public:	
    void MeleeAttack();
    void RangeAttack();
    void OnNextComboSection();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "RangeWeapon")
    TSubclassOf<AGun> RangeWeaponClass;

    UPROPERTY(EditDefaultsOnly, Category = "RangeWeapon")
    FName RangeWeaponAttachPointName = "lhWeaponSocket";

	virtual void BeginPlay() override;

private:
    AGun* m_pRangeWeapon;
    FVector m_rangeAttackPoint;
    bool  m_bIsComboChain = false;
    bool  m_bWasFirstAttack = false;
    uint8 m_nComboIndex = 0;

    virtual void SpawnWeapons() override;
    virtual void InitAnimations() override;   
    void PlayMeleeAttackAnim();

    void OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp);

    UPlayerMovementComponent* GetPlayerMovementComponent() const;
};
