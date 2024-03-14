// Lazy Pixel. All Rights Reserved.

#include "Weapon/RangeWeapons/Gun.h"

#include "Character/Player/BasePlayerController.h"
#include "Weapon/RangeWeapons/Projectile.h"

void AGun::MakeShoot(const FVector& Point)
{
    if (IsAmmoEmpty())
        return;
    
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
    projectile->InitProperties(projectileProperties);
    projectile->FinishSpawning(spawnTransform);
    
    if (!isInfiniteAmmo)
    {
        m_currentBullets--;
        OnAmmoChanged.Broadcast(m_currentBullets);
        
        if (IsAmmoEmpty())
            OnEmptyAmmo.Broadcast();
    }
}

void AGun::BeginPlay()
{
    Super::BeginPlay();

    m_currentBullets = maxBullets;
}
