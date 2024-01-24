// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "Gun.generated.h"

class AProjectile;

UCLASS()
class MAINPROJECT_API AGun : public ABaseWeapon
{
    GENERATED_BODY()

public:
    void MakeShot(USkeletalMeshComponent* MeshComp);

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Projectile")
    TSubclassOf<AProjectile> ProjectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Sockets")
    FName MuzzleSocketName = "MuzzleSocket";

};
