// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Character/BaseCharacter.h"
#include "Animations/MeleeAtackAnimNotifyState.h"
#include "Animations/RangeAttackNotify.h"

UBaseWeaponComponent::UBaseWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UBaseWeaponComponent::DisableAllWeaponsCollision()
{
    for (const auto& weapon: weapons)
    {
        weapon->DisableMeshCollision();
    }
}

void UBaseWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

    SpawnStartWeapons();
    InitAnimations();
}

void UBaseWeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    if (EndPlayReason == EEndPlayReason::Destroyed)
    {
        DestroyWeapons();
    }
}

void UBaseWeaponComponent::SpawnAllWeapons() 
{
    for (const auto& data: weaponData)
    {
        const auto weapon = SpawnWeapon(data.WeaponClass);
        if (!weapon)
            continue;

        AttachWeapon(weapon, data.WeaponAttachPointName);
        weapons.Add(weapon);
    }
}

void UBaseWeaponComponent::SpawnStartWeapons()
{
    for (const auto weaponClass: startWeapons)
    {
        AddWeapon(weaponClass);
    }

    OnAfterSpawnAllWeapons.Broadcast();
}

void UBaseWeaponComponent::DestroyWeapons()
{
    for (const auto weapon: weapons)
    {
        if (!weapon)
            continue;

        weapon->Destroy();
    }
    weapons.Reset();
}

ABaseWeapon* UBaseWeaponComponent::AddWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass)
{
    const auto data = FindDataByChildWeaponClass(WeaponClass);
    if (!data)
        return nullptr;
    
    const auto weapon = SpawnWeapon(data->WeaponClass);
    if (!weapon)
        return nullptr;

    AttachWeapon(weapon, data->WeaponAttachPointName);
    weapons.Add(weapon);

    OnAfterSpawnAllWeapons.Broadcast();

    return weapon;
}

ABaseWeapon* UBaseWeaponComponent::SpawnWeapon(const TSubclassOf<ABaseWeapon>& WeaponClass) const
{
    if (!GetWorld() || !WeaponClass)
        return nullptr;
    
    return GetWorld()->SpawnActor<ABaseWeapon>(WeaponClass);
}

void UBaseWeaponComponent::AttachWeapon(ABaseWeapon* Weapon, const FName& SocketName) const
{
    ABaseCharacter* character = Cast<ABaseCharacter>(GetOwner());
    if (!character)
        return;

    const FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
    Weapon->AttachToComponent(character->GetMesh(), AttachmentRules, SocketName);
    Weapon->SetOwner(character);
}

FWeaponData* UBaseWeaponComponent::FindDataByChildWeaponClass(const TSubclassOf<ABaseWeapon>& WeaponClass)
{
    return weaponData.FindByPredicate([&WeaponClass](const FWeaponData& Data)
    {
        return WeaponClass.GetDefaultObject()->IsA(Data.WeaponClass);
    });
}

FWeaponData* UBaseWeaponComponent::FindDataByBaseWeaponClass(const TSubclassOf<ABaseWeapon>& WeaponClass)
{
    return weaponData.FindByPredicate([&WeaponClass](const FWeaponData& Data)
    {
        return Data.WeaponClass.GetDefaultObject()->IsA(WeaponClass);
    });
}

void UBaseWeaponComponent::InitAnimations()
{
    for (const auto& data: weaponData)
    {
        SubscribeAnimationNotifies(data.WeaponClass.GetDefaultObject());
    }
}

void UBaseWeaponComponent::SubscribeAnimationNotifies(const ABaseWeapon* Weapon)
{
    if (!Weapon) 
        return;

    const TArray<UAnimMontage*> animMontages = Weapon->GetAttackMontages();
    if (animMontages.IsEmpty())
        return;

    for (const auto montage : animMontages)
    {
        const auto notifyEvents = montage->Notifies;
        for (const auto& notifyEvent : notifyEvents)
        {
            OnSubscribeToNotifies(notifyEvent);
        }
    }
}

void UBaseWeaponComponent::OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent)
{
    SubscribeOnMeleeNotify(NotifyEvent);
    SubscribeOnRangeNotify(NotifyEvent);
}

void UBaseWeaponComponent::SubscribeOnMeleeNotify(const FAnimNotifyEvent& NotifyEvent)
{
    const auto meleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
    if (!meleeNotifyState)
        return;

    meleeNotifyState->FOnMeleeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnMeleeNotifyStateHandle);
    meleeNotifyState->FOnMeleeAttackEndNotify.AddUObject(this, &UBaseWeaponComponent::OnMeleeNotifyEndHandle);
}

void UBaseWeaponComponent::SubscribeOnRangeNotify(const FAnimNotifyEvent& NotifyEvent)
{
    const auto rangeNotify = Cast<URangeAttackNotify>(NotifyEvent.Notify);
    if (!rangeNotify)
        return;

    rangeNotify->FOnRangeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnRangeNotifyHandle);
}

void UBaseWeaponComponent::OnMeleeNotifyStateHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    if (const auto pMeleeWeapon = FindWeapon<ASword>())
        pMeleeWeapon->EnableAttackCollision();

    OnMeleeStartAttackAnim();
}

void UBaseWeaponComponent::OnMeleeNotifyEndHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    if (const auto pMeleeWeapon = FindWeapon<ASword>())
    {
        pMeleeWeapon->DisableAttackCollision();
        pMeleeWeapon->ClearDamagedActors();
    }
}

void UBaseWeaponComponent::OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    OnRangeAttackAnim();
}
