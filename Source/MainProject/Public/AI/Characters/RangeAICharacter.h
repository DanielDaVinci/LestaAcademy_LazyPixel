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
    static void InitDropRate() { curDropRate = maxDropRate / 2.f; }
    
protected:
    UPROPERTY(EditDefaultsOnly, Category = "PickupType")
    TSubclassOf<AWeaponPickup> pickupClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DropRate", meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float baseDropRate = 50.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DropRate", meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float dropRateStep = 25.0f;

    virtual void OnDeath() override;

private:
    inline static const float minDropRate = 0.0f;
    inline static const float maxDropRate = 100.0f;
    inline static float curDropRate;

    bool UpdateDropRate();
    void SpawnPickup() const;
};
