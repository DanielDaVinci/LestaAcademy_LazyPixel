// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/BasePickup.h"
#include "HealthStation.generated.h"

class URectLightComponent;

UCLASS()
class MAINPROJECT_API AHealthStation : public ABasePickup
{
	GENERATED_BODY()
	
public:	
	AHealthStation();
    
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "HealthDisplayMeshComponent")
    UStaticMeshComponent* pHealthDisplayMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "RectLightComponent")
    URectLightComponent* pRectLightComponent;

    UPROPERTY(EditDefaultsOnly, Category = "Health")
    float healAmount = 50.0f;

    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void PickUpHandle(APlayerCharacter* Character) override;

private:
    bool isUsed = false;
};
