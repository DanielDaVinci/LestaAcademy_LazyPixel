// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Room.h"
#include "GameFramework/Actor.h"
#include "FloorManager.generated.h"

UCLASS()
class MAINPROJECT_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AFloorManager();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment")
    TArray<ARoom*> rooms;
    
	virtual void BeginPlay() override;
    
};
