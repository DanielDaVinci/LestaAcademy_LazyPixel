// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WavesSystemComponent.generated.h"

class AAIBaseCharacter;
class AEnemySpawner;

USTRUCT(BlueprintType, Blueprintable)
struct FSpawner
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="Enemy Spawner")
    AEnemySpawner* pEnemySpawner;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName="AI Base Character Class")
    TSubclassOf<AAIBaseCharacter> AIBaseCharacterClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0"))
    int32 EnemiesCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0.0"))
    float StartDelay;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin="0.0"))
    float SpawnDelay;
};

USTRUCT(BlueprintType)
struct FWave
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FSpawner> Spawners;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWavesSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWavesSystemComponent();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Room|Enemies")
    TArray<FWave> waves;
    
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
