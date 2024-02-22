// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/Components/BaseWeaponComponent.h"
#include "WeaponComponent.generated.h"

class UStateMachineComponent;
class ASword;
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

    // Animation and notifies
protected:
    virtual void OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent) override;

private:
    void SubscribeOnComboNotify(const FAnimNotifyEvent& NotifyEvent);
    void OnComboNotifyHandle(USkeletalMeshComponent* MeshComp);

    // Game logic / Attack
public:
    void MeleeAttack();
    
protected:
    void OnStartComboState(int32 ComboIndex);
    void OnEndComboState(EStateResult StateResult, int32 ComboIndex);

private:
    int32 m_nextComboIndex = 0;
    
    void PlayMeleeWeaponComboAnim(ASword* Weapon, int32 ComboIndex) const;
    
public:
    void RangeAttack();
    
protected:
    void OnStartRangeState(FVector WorldPointToRotate);
    void OnEndRangeState(EStateResult StateResult);

private:
    FVector m_rangeAttackPoint;

protected:
    virtual void OnMeleeStartAttackAnim() override;
    virtual void OnRangeAttackAnim() override;

public:
    APlayerCharacter* GetPlayerCharacter() const;
    ABasePlayerController* GetPlayerController() const;
    UPlayerMovementComponent* GetPlayerMovementComponent() const;
    UStateMachineComponent* GetStateMachineComponent() const;
    
};
