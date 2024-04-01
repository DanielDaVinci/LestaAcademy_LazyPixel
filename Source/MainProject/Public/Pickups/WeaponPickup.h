// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/BasePickup.h"
#include "WeaponPickup.generated.h"

class AGun;
class ABaseWeapon;

UCLASS()
class MAINPROJECT_API AWeaponPickup : public ABasePickup
{
	GENERATED_BODY()
	
public:
	AWeaponPickup();
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(EditDefaultsOnly, Category = "WeaponType")
    TSubclassOf<ABaseWeapon> weaponClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Rotation")
    float rotationYaw = 0.0f;

    virtual void PickUpHandle(APlayerCharacter* Character) override;
};
