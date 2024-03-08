// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/BaseWeaponComponent.h"
#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"
#include "Character/BaseCharacter.h"
#include "Animations/MeleeAtackAnimNotifyState.h"
#include "Animations/RangeAttackNotify.h"

//DEFINE_LOG_CATEGORY_STATIC(LogBaseWeaponComponent, All, All);

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

    SpawnAllWeapons();
    InitAnimations();
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

void UBaseWeaponComponent::InitAnimations()
{
    for (const auto& weapon: weapons)
    {
        SubscribeAnimationNotifies(weapon);
    }
}

void UBaseWeaponComponent::SubscribeAnimationNotifies(ABaseWeapon* Weapon)
{
    if (!Weapon || !Weapon->GetAttackMontage())
        return;

    const auto notifyEvents = Weapon->GetAttackMontage()->Notifies;
    for (const auto& notifyEvent: notifyEvents)
    {
        OnSubscribeToNotifies(notifyEvent);
    }
}

void UBaseWeaponComponent::OnSubscribeToNotifies(const FAnimNotifyEvent& NotifyEvent)
{
    SubscribeOnMeleeNotify(NotifyEvent);
    SubscribeOnRangeNotify(NotifyEvent);
}

void UBaseWeaponComponent::SubscribeOnMeleeNotify(const FAnimNotifyEvent& NotifyEvent)
{
    auto meleeNotifyState = Cast<UMeleeAttackAnimNotifyState>(NotifyEvent.NotifyStateClass);
    if (!meleeNotifyState)
        return;

    meleeNotifyState->FOnMeleeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnMeleeNotifyStateHandle);
    meleeNotifyState->FOnMeleeAttackEndNotify.AddUObject(this, &UBaseWeaponComponent::OnMeleeNotifyEndHandle);
}

void UBaseWeaponComponent::SubscribeOnRangeNotify(const FAnimNotifyEvent& NotifyEvent)
{
    auto rangeNotify = Cast<URangeAttackNotify>(NotifyEvent.Notify);
    if (!rangeNotify)
        return;

    rangeNotify->FOnRangeAttackNotify.AddUObject(this, &UBaseWeaponComponent::OnRangeNotifyHandle);
}

void UBaseWeaponComponent::OnMeleeNotifyStateHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    OnMeleeStartAttackAnim();
}

void UBaseWeaponComponent::OnMeleeNotifyEndHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    if (const auto pMeleeWeapon = FindWeapon<ASword>())
        pMeleeWeapon->ClearDamagedActors();
}

void UBaseWeaponComponent::OnRangeNotifyHandle(USkeletalMeshComponent* MeshComp)
{
    if (MeshComp->GetOwner() != GetOwner())
        return;

    OnRangeAttackAnim();
}
