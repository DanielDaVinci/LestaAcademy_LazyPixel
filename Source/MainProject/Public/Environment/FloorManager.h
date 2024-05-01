// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Room.h"
#include "GameFramework/Actor.h"
#include "Interface/PrePostBeginInterface.h"
#include "FloorManager.generated.h"

class AEndRoom;

UCLASS()
class MAINPROJECT_API AFloorManager : public AActor, public IPrePostBeginInterface
{
	GENERATED_BODY()
	
public:
	AFloorManager();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment")
    TArray<ARoom*> priorityQueueRooms;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment|End")
    UWorld* nextLevel;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment|End")
    AEndRoom* endRoom;

    virtual void PostInitializeComponents() override;
    
    virtual void PreBeginPlay() override;
	virtual void BeginPlay() override;
    virtual void PostBeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerEnterRoom(int32 Index);
    UFUNCTION(BlueprintNativeEvent)
    void OnClearRoom(int32 Index);

private:
    int32 m_currentRoomIndex = -1;
    
    void BindEvents();
    void Preparation();
    void ApplySavedData();
    
    void SaveData();

    void SetupRoomForStartup(int32 Index);
    void SetupRoomForEnter(int32 Index);
    void SetupRoomForFight(int32 Index);
    void SetupRoomAfterExit(int32 Index);
    void CleanRoom(int32 Index);

    void OnPlayerEnterEndRoom();

    ARoom* SafeGetRoom(int32 Index);
    ARoom* SafeGetCurrentRoom();
};
