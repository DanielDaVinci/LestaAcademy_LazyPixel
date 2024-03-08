// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "Components/ActorComponent.h"
#include "Weapon/BaseWeapon.h"
#include "BaseWeaponComponent.generated.h"

class ABaseWeapon;
class AProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UBaseWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBaseWeaponComponent();

    void DisableAllWeaponsCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<FWeaponData> weaponData;

    virtual void BeginPlay() override;

    // Weapons
private:
    virtual void SpawnAllWeapons();

protected:    
    ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass) const;
    void AttachWeapon(ABaseWeapon* Weapon, const FName& SocketName) const;
    
protected:
    UPROPERTY()
    TArray<ABaseWeapon*> weapons;
    
    template<typename T>
    T* FindWeapon(const TSubclassOf<T>& WeaponClass = nullptr) const;
    
    // Animations and notifies
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
    void OnMeleeNotifyEndHandle(USkeletalMeshComponent* MeshComp);
    void OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp);

protected:
    virtual void OnMeleeStartAttackAnim() {}
    virtual void OnRangeAttackAnim() {}
};

template <typename T>
T* UBaseWeaponComponent::FindWeapon(const TSubclassOf<T>& WeaponClass) const
{
    for (const auto& weapon: weapons)
    {
        if (weapon->IsA<T>())
            return Cast<T>(weapon);
    }

    return nullptr;
}
