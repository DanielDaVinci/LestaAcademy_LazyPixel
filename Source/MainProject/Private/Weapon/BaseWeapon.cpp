// Lazy Pixel. All Rights Reserved.


#include "Weapon/BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);

    pWeaponMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMeshComponent");
    pWeaponMeshComponent->SetupAttachment(GetRootComponent());
}

void ABaseWeapon::DisableCollision() const
{
    pWeaponMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
