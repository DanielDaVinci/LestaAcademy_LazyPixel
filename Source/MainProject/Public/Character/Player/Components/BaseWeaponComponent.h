// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "Components/ActorComponent.h"
#include "BaseWeaponComponent.generated.h"

class ABaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UBaseWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBaseWeaponComponent();

    // UFUNCTION()
    // void DisableMeleeCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<FWeaponData> weaponData;

    virtual void BeginPlay() override;

private:
    virtual void SpawnAllWeapons();
    
    ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass) const;
    void AttachWeapon(ABaseWeapon* Weapon, const FName& SocketName) const;
    
protected:
    UPROPERTY()
    TArray<ABaseWeapon*> weapons;

private:
    virtual void InitAnimations();
    void SubscribeAnimationNotifies(ABaseWeapon* Weapon);

protected:
    virtual void OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent);
    
private:
    void SubscribeOnMeleeNotify(const FAnimNotifyEvent& NotifyEvent);
    void SubscribeOnRangeNotify(const FAnimNotifyEvent& NotifyEvent);
    
    void OnMeleeNotifyStateHandle(USkeletalMeshComponent* MeshComp);
    // void OnStartAttackState(USkeletalMeshComponent* MeshComp);
    void OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp);

protected:
    virtual void OnMeleeStartAttackAnim() {}
    virtual void OnRangeAttackAnim() {}
};
