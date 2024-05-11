// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FloorPlotDataAsset.generated.h"

UENUM()
enum class EPlotEvent : uint8
{
    StartGame,
    EnterRoom,
    WaveEnd,
    KillFirstEnemy,
};

USTRUCT()
struct FPlotDialogue
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    UDataTable* PlotDataTable = nullptr;

    UPROPERTY(EditAnywhere)
    bool bStartAnimation = true;

    UPROPERTY(EditAnywhere)
    bool bEndAnimation = true;

    UPROPERTY(EditAnywhere)
    bool bWithGamePause = false;

    UPROPERTY(EditAnywhere)
    EPlotEvent PlotEvent = EPlotEvent::EnterRoom;

    UPROPERTY(EditAnywhere, meta=(ClampMin="0.01", EditConditionHides, EditCondition="PlotEvent!=EPlotEvent::StartGame"))
    float CallPlotAfterEvent = 0.01f;

    UPROPERTY(EditAnywhere, meta=(ClampMin="0", EditConditionHides, EditCondition="PlotEvent!=EPlotEvent::StartGame"))
    int32 RoomIndex = 0;

    UPROPERTY(EditAnywhere, meta=(ClampMin="0", EditConditionHides, EditCondition="PlotEvent==EPlotEvent::WaveEnd"))
    int32 WaveIndex = 0;
};

UCLASS()
class MAINPROJECT_API UFloorPlotDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere)
    TArray<FPlotDialogue> GamePlots;
    
};
