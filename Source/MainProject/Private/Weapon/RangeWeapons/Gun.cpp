// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/RangeWeapons/Gun.h"

#include "Character/Player/BasePlayerController.h"
#include "Weapon/RangeWeapons/Projectile.h"
#include "GameFramework/Character.h"

void AGun::MakeShoot(const FVector& Point)
{
    FVector shootDirection = Point - GetActorLocation();
    shootDirection.Z = 0.0f;
    shootDirection.Normalize();
    
    const FTransform socketTransform = pWeaponMeshComponent->GetSocketTransform(muzzleSocketName);
    const FTransform spawnTransform(FRotator::ZeroRotator, socketTransform.GetLocation());

    AProjectile* projectile = GetWorld()->SpawnActorDeferred<AProjectile>(projectileClass, spawnTransform);
    if (!projectile)
        return;
    
    projectile->SetOwner(GetOwner());
    projectile->SetShootDirection(shootDirection);
    projectile->SetDamage(damage);
    if (const auto character = Cast<ACharacter>(GetOwner()))
    {
        projectile->SetTrailColor(character->IsPlayerControlled() ? 0 : 1);
        character->IsPlayerControlled() ? bullets-- : bullets;
    }
    
    projectile->FinishSpawning(spawnTransform);

    if (bullets <= 0)
        OnEmptyGun.Broadcast();
}
