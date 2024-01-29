// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon/RangeWeapons/Gun.h"
#include "Weapon/RangeWeapons/Projectile.h"
#include "GameFramework/Character.h"
#include "Character/Player/Components/PlayerMovementComponent.h"

void AGun::MakeShot(USkeletalMeshComponent* MeshComp)
{
    if (GetOwner() != MeshComp->GetOwner())
        return;

    const FTransform SocketTransform = pWeaponMeshComponent->GetSocketTransform(FName("MuzzleSocket"));
    const FTransform SpawnTranform(FRotator::ZeroRotator, SocketTransform.GetLocation());

    const FVector TraceStart = SocketTransform.GetLocation();
    const FVector TraceEnd = TraceStart + GetDirection();//    MouseDirection;

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

FVector AGun::GetDirection()
{
    const auto character = Cast<ACharacter>(GetOwner());
    if (!character)
        return FVector();

    if (character->IsPlayerControlled())
    {
        const auto MovComp = Cast<UPlayerMovementComponent>(character->GetMovementComponent());
        return MovComp->GetMouseViewDirection();
    }
    else
        return pWeaponMeshComponent->GetSocketRotation(FName("MuzzleSocket")).Vector();
}
