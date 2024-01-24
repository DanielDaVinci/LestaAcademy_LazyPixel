// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/RangeWeapons/Gun.h"
#include "Weapon/RangeWeapons/Projectile.h"
#include "GameFramework/Character.h"

void AGun::MakeShot(USkeletalMeshComponent* MeshComp)
{
    if (GetOwner() != MeshComp->GetOwner())
        return;

    const FTransform SocketTransform = pWeaponMeshComponent->GetSocketTransform(MuzzleSocketName);
    const FTransform SpawnTranform(FRotator::ZeroRotator, SocketTransform.GetLocation());

    const FVector TraceStart = SocketTransform.GetLocation();
    FVector TraceEnd = TraceStart + SocketTransform.GetRotation().GetForwardVector() * range;
    TraceEnd.Z = TraceStart.Z;      // During shoot socket pointing down, so we need to equalize the height

    FCollisionQueryParams CollisionParams;
    CollisionParams.AddIgnoredActor(GetOwner());

    FHitResult HitResult;
    GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECollisionChannel::ECC_Visibility, CollisionParams);

    FVector EndPoint = HitResult.bBlockingHit ? HitResult.ImpactPoint : TraceEnd;
    const FVector Direction = (EndPoint - SocketTransform.GetLocation()).GetSafeNormal();

    AProjectile* Projectile = GetWorld()->SpawnActorDeferred<AProjectile>(ProjectileClass, SpawnTranform);
    Projectile->SetOwner(GetOwner());
    if (Projectile)
    {
        Projectile->SetShotDirection(Direction);
        Projectile->SetDamage(damage);
        Projectile->m_EndTrace = EndPoint;

        Projectile->FinishSpawning(SpawnTranform);
    }
}
