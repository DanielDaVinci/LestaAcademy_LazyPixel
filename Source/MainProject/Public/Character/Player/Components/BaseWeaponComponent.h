// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Character/Player/PlayerCoreTypes.h"
#include "Components/ActorComponent.h"
#include "Interface/PrePostBeginInterface.h"
#include "Weapon/BaseWeapon.h"
#include "BaseWeaponComponent.generated.h"

class USaveGame;
DECLARE_MULTICAST_DELEGATE(FOnAfterSpawnAllWeaponsSignature)

class ABaseWeapon;
class AProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UBaseWeaponComponent
    : public UActorComponent
{
	GENERATED_BODY()

    friend class UDataSaveComponent;

public:	
	UBaseWeaponComponent();

    FOnAfterSpawnAllWeaponsSignature OnAfterSpawnAllWeapons;

    void DisableAllWeaponsCollision();

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<FWeaponData> weaponData;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon")
    TArray<TSubclassOf<ABaseWeapon>> startWeapons;
    
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    // Weapons
private:
    virtual void SpawnAllWeapons();
    virtual void SpawnStarWeapons();
    void DestroyWeapons();

protected:
    virtual ABaseWeapon* AddWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass);
    
    ABaseWeapon* SpawnWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass) const;
    void AttachWeapon(ABaseWeapon* Weapon, const FName& SocketName) const;

    FWeaponData* FindDataByChildWeaponClass(const TSubclassOf<ABaseWeapon>& WeaponClass);
    FWeaponData* FindDataByBaseWeaponClass(const TSubclassOf<ABaseWeapon>& WeaponClass);
    
protected:
    UPROPERTY()
    TArray<ABaseWeapon*> weapons;

public:
    template<typename T>
    T* FindWeapon(const TSubclassOf<T>& WeaponClass) const;

    template<class T>
    T* FindWeapon() const;
    
    // Animations and notifies
protected:
    virtual void InitAnimations();
    void SubscribeAnimationNotifies(const ABaseWeapon* Weapon);

protected:
    virtual void OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent);

private:
    void SubscribeOnMeleeNotify(const FAnimNotifyEvent& NotifyEvent);
    void SubscribeOnRangeNotify(const FAnimNotifyEvent& NotifyEvent);
    
    void OnMeleeNotifyStateHandle(USkeletalMeshComponent* MeshComp);
    void OnMeleeNotifyEndHandle(USkeletalMeshComponent* MeshComp);
    void OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp);

protected:
    virtual void OnMeleeStartAttackAnim() {}
    virtual void OnRangeAttackAnim() {}
};

template <typename T>
FORCEINLINE T* UBaseWeaponComponent::FindWeapon(const TSubclassOf<T>& WeaponClass) const
{
    for (const auto& weapon: weapons)
    {
        if (weapon->IsA(WeaponClass))
        {
            return Cast<T>(weapon);
        }
    }

    return nullptr;
}

template <class T>
T* UBaseWeaponComponent::FindWeapon() const
{
    for (const auto& weapon: weapons)
    {
        if (weapon->IsA<T>())
        {
            return Cast<T>(weapon);
        }
    }

    return nullptr;
}
