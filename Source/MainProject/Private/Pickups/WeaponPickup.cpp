// Lazy Pixel. All Rights Reserved.


#include "Pickups/WeaponPickup.h"
#include "Character/Player/PlayerCharacter.h"
//#include "Weapon/BaseWeapon.h"
#include "Character/Player/Components/WeaponComponent.h"

AWeaponPickup::AWeaponPickup()
{
	PrimaryActorTick.bCanEverTick = true;

    pWeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMeshComponent");
    pWeaponMeshComponent->SetupAttachment(GetRootComponent());
}

void AWeaponPickup::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    AddActorLocalRotation(FRotator(0.0f, rotationYaw, 0.0f));
}

void AWeaponPickup::PickUpHandle() 
{
    if (!m_character) return;

    m_character->GetComponentByClass<UWeaponComponent>()->PickUpWeapon(weaponClass);
    Destroy();
}
