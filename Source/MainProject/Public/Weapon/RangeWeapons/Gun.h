// Fill out your copyright notice in the Description page of Project Settings.

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
    void MakeShoot(const FVector& Point);
    FName GetMuzzleSocketName() const { return muzzleSocketName; }

    FOnEmptyGunSignature OnEmptyGun;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile")
    TSubclassOf<AProjectile> projectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName muzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
    int32 bullets = 5;
    
private:
    uint8 m_nProjTrailCol = 0;
};
