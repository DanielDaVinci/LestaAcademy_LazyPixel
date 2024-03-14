// Lazy Pixel. All Rights Reserved.


#include "Weapon/BaseWeapon.h"

#include "Character/BaseCharacter.h"
#include "Engine/DamageEvents.h"

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

void ABaseWeapon::GiveDamage(AActor* DamageTaker)
{
    const auto pOwningCharacter = Cast<ABaseCharacter>(GetOwner());
    if (!pOwningCharacter || !pOwningCharacter->GetController())
        return;
    
    DamageTaker->TakeDamage(damage, FDamageEvent(), pOwningCharacter->GetController(), this);
}
