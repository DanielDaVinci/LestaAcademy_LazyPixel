// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "Gun.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnEmptyGunSignature);

class AProjectile;

UCLASS()
class MAINPROJECT_API AGun : public ABaseWeapon
{
    GENERATED_BODY()

public:
    void MakeShoot(TSubclassOf<AProjectile>& projectileClass, const FVector& Point);
    FName GetMuzzleSocketName() const { return muzzleSocketName; }

    FOnEmptyGunSignature OnEmptyGun;

protected:
    UPROPERTY(EditDefaultsOnly, Category = "Weapon Properties|Gun|Projectile")
    FName muzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon Properties|Gun")
    int32 bullets = 5;

private:
    uint8 m_nProjTrailCol = 0;

};
