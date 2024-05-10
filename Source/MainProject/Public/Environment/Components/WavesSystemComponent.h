// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Environment/EnemySpawner.h"
#include "Environment/EnvironmentCoreTypes.h"
#include "WavesSystemComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnAllWavesEndSignature)

class ARoom;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAINPROJECT_API UWavesSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UWavesSystemComponent();

    DECLARE_MULTICAST_DELEGATE_OneParam(FOnWaveEndSignature, int32);
    FOnWaveEndSignature OnWaveEndEvent;
    FOnAllWavesEndSignature OnAllWavesEndEvent;

    void StartWaves();

    UFUNCTION(BlueprintCallable)
    int32 GetWavesNum() const;

protected:
    virtual void BeginPlay() override;

    void BindEvents();

    // Dynamic Enemies 
protected:
    void BindSceneEnemies();
    
private:
    TArray<AAIBaseCharacter*> FindEnemiesInRoom() const;

    
    // Manual Enemies
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Room|Enemies|Manual")
    TArray<FWave> waves;

    void StartWave(int32 WaveIndex);

private:
    TArray<FTimerHandle> m_spawnTimers;
    TArray<int32> m_spawnCounts;

    UFUNCTION()
    void OnSpawnTick(int32 SpawnerIndex);

    
    // Common
protected:
    void OnEnemyDied();
    void CheckEnemyCount();
    void OnWaveEnd(int32 WaveIndex);
    
    ARoom* GetOwningRoom() const;
    
private:
    int32 m_currentAliveEnemies = 0;
    int32 m_currentWaveIndex = -1;

    void BindEnemiesOnDeath(const TArray<AAIBaseCharacter*>&& Enemies);
    void BindOneEnemyOnDeath(const AAIBaseCharacter* Enemy);

    void CloseDoorAllSpawners(int32 WaveIndex);
};
