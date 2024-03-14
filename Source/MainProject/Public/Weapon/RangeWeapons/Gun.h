// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "MainProjectCoreTypes.h"
#include "Gun.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnEmptyAmmoSignature);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAmmoChangedSignature, int32);

class AProjectile;

UCLASS()
class MAINPROJECT_API AGun : public ABaseWeapon
{
    GENERATED_BODY()

public:
    void MakeShoot(const FVector& Point);

    int32 GetBullets() const { return m_currentBullets; }
    int32 GetMaxBullets() const { return maxBullets; }
    FName GetMuzzleSocketName() const { return muzzleSocketName; }
    bool IsAmmoEmpty() const { return m_currentBullets <= 0; }

    FOnEmptyAmmoSignature OnEmptyAmmo;
    FOnAmmoChangedSignature OnAmmoChanged;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties|Gun")
    bool isInfiniteAmmo = false;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon Properties|Gun", meta = (ClampMin = "0"))
    int32 maxBullets = 5;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon Properties|Gun|Projectile")
    TSubclassOf<AProjectile> projectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Weapon Properties|Gun|Projectile")
    FName muzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon Properties|Gun|Projectile")
    FProjectileProperties projectileProperties;

    virtual void BeginPlay() override;

private:
    int32 m_currentBullets;
    uint8 m_nProjTrailCol = 0;
};
