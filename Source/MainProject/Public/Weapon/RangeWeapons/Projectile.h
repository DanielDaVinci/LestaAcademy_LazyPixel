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

    void SetShotDirection(const FVector& Direction) { m_ShotDirection = Direction; }
    void SetDamage(const float Damage) { m_Damage = Damage; }
    void SetTrailColor(const uint8 nColorIndex) { if (TrailColors.IsValidIndex(nColorIndex)) CurTrailColor = TrailColors[nColorIndex]; }

protected:
    UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleDefaultsOnly, Category = "Weapon")
    UProjectileMovementComponent* MovementComponent;

    UPROPERTY(EditDefaultsOnly, Category = "VFX")
    TArray<FLinearColor> TrailColors;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "VFX")
    FLinearColor CurTrailColor;

    virtual void BeginPlay() override;

private:
    UFUNCTION()
    void OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
        const FHitResult& Hit);

    FVector m_ShotDirection;
    float m_Damage;
};
