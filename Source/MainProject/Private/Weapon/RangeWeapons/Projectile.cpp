// Lazy Pixel. All Rights Reserved.

#include "Weapon/RangeWeapons/Projectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"
#include "Weapon/RangeWeapons/Gun.h"

AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    pCollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    pCollisionComponent->InitSphereRadius(3.0f);
    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    pCollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
    SetRootComponent(pCollisionComponent);

    pMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
    pMovementComponent->InitialSpeed = 2000.f;
    pMovementComponent->ProjectileGravityScale = 0.f;
}

void AProjectile::InitProperties(const FProjectileProperties& projProperties) 
{
    m_damage = projProperties.damage;
    trailColor = projProperties.trailColor;
    pCollisionComponent->SetCollisionObjectType(projProperties.projType);
    if (projProperties.projType == ECC_Enemy)
        pCollisionComponent->SetCollisionResponseToChannel(ECC_Enemy, ECR_Ignore);
}

void AProjectile::SetRangeWeaponCreator(AGun* RangeWeapon)
{
    m_rangeWeaponCreator = RangeWeapon;
}

void AProjectile::BeginPlay()
{
    Super::BeginPlay();

    check(pMovementComponent);
    pMovementComponent->Velocity = m_shotDirection * pMovementComponent->InitialSpeed;
    pCollisionComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnProjectileHit);

    SetLifeSpan(10.0f);
}

void AProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    OtherActor->TakeDamage(m_damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), m_rangeWeaponCreator);
    Destroy();
}
