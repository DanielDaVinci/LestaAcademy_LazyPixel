// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "RangeAICharacter.generated.h"

class AWeaponPickup;

UCLASS()
class MAINPROJECT_API ARangeAICharacter : public AAIBaseCharacter
{
	GENERATED_BODY()

public:
    ARangeAICharacter(const FObjectInitializer& ObjInit);
    
protected:
    UPROPERTY(EditDefaultsOnly, Category = "PickupType")
    TSubclassOf<AWeaponPickup> pickupClass;

    virtual void OnDeath() override;

private:
    void SpawnPickup() const;
};
