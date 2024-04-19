// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "PlayerWeaponComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnMeleeAttackHasHitSignature)

class UStateMachineComponent;
class ABaseWeapon;
class APlayerCharacter;
class ABasePlayerController;
class UPlayerMovementComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UPlayerWeaponComponent : public UBaseWeaponComponent
{
	GENERATED_BODY()

    friend class UDataSaveComponent;

protected:
	virtual void BeginPlay() override;

private:
    void BindInput();
    void BindEvents();
    
    // Animation and notifies
protected:
    virtual void OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent) override;

private:
    void SubscribeOnComboNotify(const FAnimNotifyEvent& NotifyEvent);
    void OnComboNotifyHandle(USkeletalMeshComponent* MeshComp);

    // Game logic / Attack

    // Melee weapon
public:
    FOnMeleeAttackHasHitSignature OnMeleeAttackHasHit;
    
    ASword* GetMeleeWeapon() const { return FindWeapon<ASword>(); }
    
protected:
    void MeleeAttack();
    void OnStartComboState(int32 ComboIndex);
    void OnEndComboState(EStateResult StateResult, int32 ComboIndex);

private:
    int32 m_nextComboIndex = 0;
    
    void PlayMeleeWeaponComboAnim(ASword* Weapon, int32 ComboIndex) const;

    // Range weapon
public:
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnRangeWeaponChangeSignature, AGun*);
    FOnRangeWeaponChangeSignature OnRangeWeaponChange;
    
    AGun* GetRangeWeapon() const { return FindWeapon<AGun>(); }
    
protected:
    void RangeAttack();
    void OnStartRangeState(FVector WorldPointToRotate);
    void OnEndRangeState(EStateResult StateResult);

private:
    FVector m_rangeAttackPoint;

    void DropWeapon(const TSubclassOf<ABaseWeapon> WeaponClass);
    void SubscribeOnDropRangeWeapon();

protected:
    virtual void OnMeleeStartAttackAnim() override;
    virtual void OnRangeAttackAnim() override;

public:
    template<typename T>
    void PickUpWeapon(const TSubclassOf<T>& WeaponClass);
    
    APlayerCharacter* GetPlayerCharacter() const;
    ABasePlayerController* GetPlayerController() const;
    UPlayerMovementComponent* GetPlayerMovementComponent() const;
    UStateMachineComponent* GetStateMachineComponent() const;
    
};

template <typename T>
void UPlayerWeaponComponent::PickUpWeapon(const TSubclassOf<T>& WeaponClass)
{
    DropWeapon(WeaponClass);

    const auto weapon = AddWeapon(WeaponClass);
    if (!weapon)
        return;
    
    OnAfterSpawnAllWeapons.Broadcast();
    SubscribeOnDropRangeWeapon();
}