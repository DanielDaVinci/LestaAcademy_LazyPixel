// Lazy Pixel. All Rights Reserved.

#include "Weapon/RangeWeapons/Projectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

DEFINE_LOG_CATEGORY_STATIC(LogProjectile, All, All);

AProjectile::AProjectile()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    CollisionComponent->InitSphereRadius(3.0f);
    CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
    SetRootComponent(CollisionComponent);

    MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovementComponent");
    MovementComponent->InitialSpeed = 2000.f;
    MovementComponent->ProjectileGravityScale = 0.f;
}

void AProjectile::BeginPlay()
{
    Super::BeginPlay();

    check(MovementComponent);
    MovementComponent->Velocity = m_ShotDirection * MovementComponent->InitialSpeed;
    CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnProjectileHit);

    SetLifeSpan(10.0f);
}

void AProjectile::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    //UE_LOG(LogProjectile, Display, TEXT("Proj hit: %s"), *OtherActor->GetName());
    if (OtherActor->GetClass() != GetOwner()->GetClass())
        OtherActor->TakeDamage(m_Damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), this);

    Destroy();
}
