// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainProjectCoreTypes.h"
#include "Projectile.generated.h"

class AGun;
class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class MAINPROJECT_API AProjectile : public AActor
{
    GENERATED_BODY()

public:
    AProjectile();

    void SetShootDirection(const FVector& Direction) { m_shotDirection = Direction; }
    void InitProperties(const FProjectileProperties& projProperties);
    void SetRangeWeaponCreator(AGun* RangeWeapon);

protected:
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "CollisionComponent")
    USphereComponent* pCollisionComponent;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Weapon", DisplayName = "MovementComponent")
    UProjectileMovementComponent* pMovementComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VFX")
    FLinearColor trailColor;

    virtual void BeginPlay() override;

private:
    UFUNCTION()
    void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);

    UPROPERTY()
    AGun* m_rangeWeaponCreator;
    
    FVector m_shotDirection;
    float m_damage;
};
