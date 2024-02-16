// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Environment/EnemySpawner.h"
#include "Environment/EnvironmentCoreTypes.h"
#include "WavesSystemComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnWaveEndSignature)
DECLARE_MULTICAST_DELEGATE(FOnAllWavesEndSignature)

class ARoom;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWavesSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWavesSystemComponent();

    FOnWaveEndSignature OnWaveEndEvent;
    FOnAllWavesEndSignature OnAllWavesEndEvent;

    void StartWaves();

protected:
    virtual void BeginPlay() override;

    void BindEvents();

    // Dynamic Enemies 
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room|Enemies|Dynamic")
    TArray<AAIBaseCharacter*> sceneEnemies;
    
    void BindSceneEnemies();
    
private:
    void FindEnemiesInRoom();

    
    // Manual Enemies
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Room|Enemies|Manual")
    TArray<FWave> waves;

    void StartWave(int32 WaveIndex);

private:
    TArray<FTimerHandle> m_timers;
    TArray<int32> m_spawnCounts;

    UFUNCTION()
    void OnSpawnTick(int32 SpawnerIndex);

    
    // Common
protected:
    void OnEnemyDied();
    void OnWaveEnd();
    
    ARoom* GetOwningRoom() const;
    
private:
    int32 m_currentAliveEnemies;
    int32 m_currentWaveIndex;

    void BindEnemiesOnDeath(const TArray<AAIBaseCharacter*>& Enemies);
    void BindOneEnemyOnDeath(const AAIBaseCharacter* Enemy);
};
