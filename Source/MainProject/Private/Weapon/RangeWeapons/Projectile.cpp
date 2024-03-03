// Lazy Pixel. All Rights Reserved.

#include "Weapon/RangeWeapons/Projectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"

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
    //UE_LOG(LogTemp, Display, TEXT("Damage %.f from projectile to actor %s"), damage, *OtherActor->GetName());
    OtherActor->TakeDamage(damage, FDamageEvent(), UGameplayStatics::GetPlayerController(GetWorld(), 0), this);

    Destroy();
}
