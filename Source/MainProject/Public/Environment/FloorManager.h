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
    TArray<ARoom*> priorityQueueRooms;
    
	virtual void BeginPlay() override;

private:
    int32 m_currentRoomIndex = 0;
    
    void BindEvents();
    
    void OnPlayerEnterRoom(ARoom* Room);
    void OnClearRoom(ARoom* Room);

    void Preparation();
};
