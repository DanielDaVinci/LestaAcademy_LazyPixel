// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class MAINPROJECT_API AProjectile : public AActor
{
    GENERATED_BODY()

public:
    AProjectile();

    void SetShootDirection(const FVector& Direction) { m_shotDirection = Direction; }
    void SetDamage(const float Damage) { m_damage = Damage; }
    void SetTrailColor(const uint8 nColorIndex) { if (trailColors.IsValidIndex(nColorIndex)) curTrailColor = trailColors[nColorIndex]; }

protected:
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "CollisionComponent")
    USphereComponent* pCollisionComponent;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "MovementComponent")
    UProjectileMovementComponent* pMovementComponent;

    UPROPERTY(EditDefaultsOnly, Category = "VFX")
    TArray<FLinearColor> trailColors;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VFX")
    FLinearColor curTrailColor;

    virtual void BeginPlay() override;

private:
    UFUNCTION()
    void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);

    FVector m_shotDirection;
    float m_damage;
};
