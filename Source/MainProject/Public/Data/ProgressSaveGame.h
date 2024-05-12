// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProgressSaveGame.generated.h"

USTRUCT()
struct FProgressData
{
    GENERATED_BODY()

    UPROPERTY()
    uint32 LevelIndex = 0;

    UPROPERTY()
    uint32 RoomIndex = -1;

    UPROPERTY()
    float HealthPercent = 1.0f;

    UPROPERTY()
    float AbilityCharge = 0.0f;

    UPROPERTY()
    uint32 BulletsNum = 0;
    
};

UCLASS()
class MAINPROJECT_API UProgressSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, SaveGame)
    FProgressData ProgressData;
    
    FString GetLevelPath() const;
    FString GetLevelName() const;
};
