// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/RangeWeapons/Gun.h"
#include "Weapon/RangeWeapons/Projectile.h"

void AGun::MakeShot(FVector MouseDirection)
{
    const FTransform SocketTransform = pWeaponMeshComponent->GetSocketTransform(FName("MuzzleSocket"));
    const FTransform SpawnTranform(FRotator::ZeroRotator, SocketTransform.GetLocation());

    const FVector TraceStart = SocketTransform.GetLocation();
    const FVector TraceEnd = TraceStart + MouseDirection;

    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());

    FHitResult HitResult;
    GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility, CollisionParams);

    FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceEnd;
    const FVector Direction = (EndPoint - SocketTransform.GetLocation()).GetSafeNormal();

    AProjectile* Projectile = GetWorld()->SpawnActorDeferred<AProjectile>(ProjectileClass, SpawnTranform);
    if (Projectile)
    {
        // UE_LOG(LogWeaponComponent, Display, TEXT("EndPoint: %s"), *EndPoint.ToString());
        // UE_LOG(LogWeaponComponent, Display, TEXT("Direction: %s"), *Direction.ToString());

        Projectile->SetShotDirection(Direction);
        Projectile->EndTrace = EndPoint;

        Projectile->FinishSpawning(SpawnTranform);
    }
}
