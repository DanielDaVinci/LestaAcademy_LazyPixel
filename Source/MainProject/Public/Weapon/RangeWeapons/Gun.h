// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "Gun.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEmptyGunSignature, const TSubclassOf<ABaseWeapon>&);

class AProjectile;

UCLASS()
class MAINPROJECT_API AGun : public ABaseWeapon
{
    GENERATED_BODY()

public:
    void MakeShoot(const FVector& Point);
    FName GetMuzzleSocketName() const { return MuzzleSocketName; }

    FOnEmptyGunSignature OnEmptyGun;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile")
    TSubclassOf<AProjectile> ProjectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName MuzzleSocketName = "MuzzleSocket";

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ammo")
    int32 Bullets = 5;
    
private:
    FVector GetDirection() const;
    uint8 m_nProjTrailCol = 0;

};
