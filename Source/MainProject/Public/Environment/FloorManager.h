// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentCoreTypes.h"
#include "GameFramework/Actor.h"
#include "Interface/PrePostBeginInterface.h"
#include "FloorManager.generated.h"

class UGamePlotComponent;
class AEndRoom;

UCLASS()
class MAINPROJECT_API AFloorManager : public AActor, public IPrePostBeginInterface
{
	GENERATED_BODY()
	
public:
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerEnterLevelRoomSignature, int32);
    FOnPlayerEnterLevelRoomSignature OnPlayerEnterLevelRoom;

    DECLARE_MULTICAST_DELEGATE_TwoParams(FOnLevelRoomWaveEndSignature, int32, int32);
    FOnLevelRoomWaveEndSignature OnLevelRoomWaveEnd;
    
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnLevelRoomFirstKillSignature, int32);
    FOnLevelRoomFirstKillSignature OnLevelRoomFirstKill;

    DECLARE_MULTICAST_DELEGATE(FOnPlayerInteractEndLevelRoomSignature);
    FOnPlayerInteractEndLevelRoomSignature OnPlayerInteractEndLevelRoom;
    
	AFloorManager();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="GamePlotComponent")
    UGamePlotComponent* pGamePlotComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment")
    TArray<FRoomParameter> priorityQueueRooms;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment|End")
    AEndRoom* endRoom;

    virtual void PostInitializeComponents() override;
    
    virtual void PreBeginPlay() override;
	virtual void BeginPlay() override;
    virtual void PostBeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(BlueprintNativeEvent)
    void OnPlayerEnterRoom(int32 Index);
    
    void OnWaveEnd(int32 WaveIndex, int32 RoomIndex);
    
    void OnFirstKill(int32 RoomIndex);
    
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
    
    void OnPlayerInteractEndRoom();

    FRoomParameter* SafeGetRoomParameter(int32 Index);
    ARoom* SafeGetRoom(int32 Index);
    
    FRoomParameter* SafeGetCurrentRoomParameter();
    ARoom* SafeGetCurrentRoom();
};
