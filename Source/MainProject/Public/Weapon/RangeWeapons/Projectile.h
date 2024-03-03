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
    bool IsInfinite() { return infinite; }

protected:
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "CollisionComponent")
    USphereComponent* pCollisionComponent;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "MovementComponent")
    UProjectileMovementComponent* pMovementComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile Properties", meta = (ClampMin = "0.0"))
    float damage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile Properties")
    bool infinite;

    virtual void BeginPlay() override;

private:
    UFUNCTION()
    void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);

    FVector m_shotDirection;
};
