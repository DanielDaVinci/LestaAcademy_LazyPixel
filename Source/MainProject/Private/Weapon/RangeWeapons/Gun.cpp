// Lazy Pixel. All Rights Reserved.

#include "Weapon/RangeWeapons/Gun.h"

#include "Character/Player/BasePlayerController.h"
#include "Weapon/RangeWeapons/Projectile.h"

void AGun::MakeShoot(TSubclassOf<AProjectile>& projectileClass, const FVector& Point)
{
    if (!projectileClass) return;

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
    projectile->FinishSpawning(spawnTransform);
    
    projectile->IsInfinite() ? bullets : bullets--;   
    if (bullets <= 0)
        OnEmptyGun.Broadcast();
}
