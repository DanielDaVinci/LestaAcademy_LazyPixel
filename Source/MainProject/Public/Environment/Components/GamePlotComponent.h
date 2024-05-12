// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interface/PrePostBeginInterface.h"
#include "GamePlotComponent.generated.h"

class UProgressSaveGame;
struct FPlotDialogue;
class UFloorPlotDataAsset;
class AFloorManager;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UGamePlotComponent : public UActorComponent, public IPrePostBeginInterface
{
	GENERATED_BODY()

public:	
	UGamePlotComponent();

protected:
    UPROPERTY(EditAnywhere, Category = "Plot")
    UFloorPlotDataAsset* FloorPlotDataAsset;
    
	virtual void BeginPlay() override;
    virtual void PostBeginPlay() override;

private:
    void BindEvents();

protected:
    void OnStartGame();
    void OnPlayerEnterRoom(int32 RoomIndex);
    void OnRoomWaveEnd(int32 RoomIndex, int32 WaveIndex);
    void OnRoomFirstKill(int32 RoomIndex);
    void OnPlayerInteractEndRoom();

    void LaunchPlot(const FPlotDialogue* Plot);

    void LoadNextLevel();
    
private:
    FTimerHandle launchTimerHandle;

    void OnLaunchTimerHandle(const FPlotDialogue* Plot);
    
protected:
    AFloorManager* GetOwningFloorManager() const;
    UProgressSaveGame* GetCurrentProgressSaveGame() const;
    
};
