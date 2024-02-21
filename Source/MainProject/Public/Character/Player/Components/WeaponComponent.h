// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "WeaponComponent.generated.h"

class APlayerCharacter;
class ABasePlayerController;
class UPlayerMovementComponent;
class AGun;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWeaponComponent : public UBaseWeaponComponent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

private:
    void BindInput();

    virtual void OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent) override;

    void MeleeAttack();
    void RangeAttack();
    void OnNextComboSection();

    virtual void OnMeleeStartAttackAnim() override;
    virtual void OnRangeAttackAnim() override;
    
private:
    AGun* m_pRangeWeapon;
    FVector m_rangeAttackPoint;
    bool  m_bIsComboChain = false;
    bool  m_bWasFirstAttack = false;
    uint8 m_nComboIndex = 0;

    void SubscribeOnComboNotify(const FAnimNotifyEvent& NotifyEvent);
    void OnComboNotifyHandle(USkeletalMeshComponent* MeshComp);
    
    void InitAnimations();   
    void PlayMeleeAttackAnim();

    void OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp);

public:
    APlayerCharacter* GetPlayerCharacter() const;
    ABasePlayerController* GetPlayerController() const;
    UPlayerMovementComponent* GetPlayerMovementComponent() const;
};
