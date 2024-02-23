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

void ABaseWeapon::DisableMeshCollision() const
{
    pWeaponMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseWeapon::EnableMeshCollision() const
{
    pWeaponMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ABaseWeapon::Detach() 
{
    FDetachmentTransformRules detachRules(EDetachmentRule::KeepWorld, false);
    DetachFromActor(detachRules);

    pWeaponMeshComponent->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
    pWeaponMeshComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
    pWeaponMeshComponent->SetSimulatePhysics(true);
    SetLifeSpan(5.0f);
}
