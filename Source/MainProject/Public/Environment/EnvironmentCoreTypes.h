#pragma once

#include "EnvironmentCoreTypes.generated.h"

class AAIBaseCharacter;
class AEnemySpawner;

USTRUCT(BlueprintType, Blueprintable)
struct FSpawnerProperties
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Enemy Spawner")
    AEnemySpawner* pEnemySpawner;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="AI Character Class")
    TSubclassOf<AAIBaseCharacter> AICharacterClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0"))
    int32 EnemiesCount = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0.0"))
    float StartDelay = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0.1"))
    float SpawnDelay = 1.0f;
};

USTRUCT(BlueprintType)
struct FWave
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0.0"))
    float StartWaveDelay = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSpawnerProperties> Spawners;
};