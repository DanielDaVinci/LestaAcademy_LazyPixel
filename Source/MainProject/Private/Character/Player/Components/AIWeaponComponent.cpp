// Lazy Pixel. All Rights Reserved.


#include "Character/Player/Components/AIWeaponComponent.h"

#include "Weapon/MeleeWeapons/Sword.h"
#include "Weapon/RangeWeapons/Gun.h"

void UAIWeaponComponent::BeginPlay() 
{
    Super::BeginPlay();
}

void UAIWeaponComponent::SpawnAllWeapons() 
{
    if (!weaponData.Num()) return;

    const auto& randData = weaponData[FMath::RandRange(0, weaponData.Num() - 1)];
    const auto& weapon = SpawnWeapon(randData.WeaponClass);
    if (!weapon) return;

    AttachWeapon(weapon, randData.WeaponAttachPointName);
    weapons.Add(weapon);
}

void UAIWeaponComponent::OnMeleeStartAttackAnim()
{
    Super::OnMeleeStartAttackAnim();

    if (const auto pMeleeWeapon = FindWeapon<ASword>())
    {
        pMeleeWeapon->OnOffCollision();
    }
}

void UAIWeaponComponent::OnRangeAttackAnim()
{
    Super::OnRangeAttackAnim();

    if (const auto pRangeWeapon = FindWeapon<AGun>())
    {
        USkeletalMeshComponent* weapSkel = pRangeWeapon->FindComponentByClass<USkeletalMeshComponent>();   
        const auto rangeAttackPoint = weapSkel->GetSocketTransform(pRangeWeapon->GetMuzzleSocketName()).GetLocation() + 
                                      weapSkel->GetSocketRotation(pRangeWeapon->GetMuzzleSocketName()).Vector();
        pRangeWeapon->MakeShoot(rangeAttackPoint);
    }
}
