// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SettingSaveGame.generated.h"

USTRUCT()
struct FSettingData
{
    GENERATED_BODY()

    UPROPERTY()
    float MusicValue = 100.0f;

    UPROPERTY()
    float SoundValue = 100.0f;
    
};

UCLASS()
class MAINPROJECT_API USettingSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, SaveGame)
    FSettingData SettingData;
};
