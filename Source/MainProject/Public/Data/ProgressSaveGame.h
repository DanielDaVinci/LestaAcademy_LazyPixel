// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ProgressSaveGame.generated.h"

USTRUCT()
struct FProgressData
{
    GENERATED_BODY()

    UPROPERTY(SaveGame, EditAnywhere, Category = "Data|Environment")
    uint8 LevelIndex;

    UPROPERTY(SaveGame, EditAnywhere, Category = "Data|Environment")
    uint8 RoomIndex;

    UPROPERTY(SaveGame, EditAnywhere, Category = "Data|Player Properties")
    float PlayerHealth;

    UPROPERTY(SaveGame, EditAnywhere, Category = "Data|Player Properties")
    float AbilityCharge;

    UPROPERTY(SaveGame, EditAnywhere, Category = "Data|Player Properties")
    uint8 BulletsNum; 
};

UCLASS()
class MAINPROJECT_API UProgressSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
    UPROPERTY(SaveGame, EditAnywhere, SaveGame)
    FProgressData ProgressData;
};
