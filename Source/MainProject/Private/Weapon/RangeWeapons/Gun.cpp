// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/RangeWeapons/Gun.h"

#include "Character/Player/BasePlayerController.h"
#include "Weapon/RangeWeapons/Projectile.h"
#include "GameFramework/Character.h"

void AGun::MakeShoot(const FVector& Point) const
{
    FVector shootDirection = Point - GetActorLocation();
    shootDirection.Z = 0.0f;
    shootDirection.Normalize();
    
    const FTransform socketTransform = pWeaponMeshComponent->GetSocketTransform(MuzzleSocketName);
    const FTransform spawnTransform(FRotator::ZeroRotator, socketTransform.GetLocation());

    AProjectile* projectile = GetWorld()->SpawnActorDeferred<AProjectile>(ProjectileClass, spawnTransform);
    if (!projectile)
        return;
    
    projectile->SetOwner(GetOwner());
    projectile->SetShootDirection(shootDirection);
    projectile->SetDamage(damage);

    projectile->FinishSpawning(spawnTransform);
}

FVector AGun::GetDirection() const
{
    const auto defaultValue = pWeaponMeshComponent->GetSocketRotation(MuzzleSocketName).Vector();
    
    const auto character = Cast<ACharacter>(GetOwner());
    if (!character || !character->IsPlayerControlled())
        return defaultValue;

    const auto playerController = Cast<ABasePlayerController>(character->GetController());
    if (!playerController)
        return defaultValue;
    
    FVector direction = playerController->GetDirectionToMouseHit(GetActorLocation());
    direction.Z = 0.0f;
    
    return direction.GetSafeNormal();
}
