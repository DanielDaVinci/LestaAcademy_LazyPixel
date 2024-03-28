// Lazy Pixel. All Rights Reserved.


#include "Environment/Components/WavesSystemComponent.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "TimerManager.h"
#include "Environment/Room.h"

UWavesSystemComponent::UWavesSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UWavesSystemComponent::StartWaves()
{
    if (sceneEnemies.Num())
    {
        m_currentAliveEnemies = sceneEnemies.Num();
        m_currentWaveIndex = -1;
    }
    else
    {
        StartWave(0);
    }
}

void UWavesSystemComponent::BeginPlay()
{
	Super::BeginPlay();

    BindSceneEnemies();
    BindEvents();
}

void UWavesSystemComponent::BindEvents()
{
    OnWaveEndEvent.AddUObject(this, &UWavesSystemComponent::OnWaveEnd);
}

void UWavesSystemComponent::BindSceneEnemies()
{
    FindEnemiesInRoom();
    BindEnemiesOnDeath(sceneEnemies);
}

void UWavesSystemComponent::FindEnemiesInRoom()
{
    ARoom* room = GetOwningRoom();
    if (!room)
        return;
    
    TArray<AActor*> overlappingActors;
    room->UpdateOverlaps(false);
    room->GetOverlappingActors(overlappingActors, AAIBaseCharacter::StaticClass());

    for (const auto& actor: overlappingActors)
    {
        auto enemy = Cast<AAIBaseCharacter>(actor);
        if (!enemy)
            continue;

        sceneEnemies.Add(enemy);
        enemy->enemyRoom = room;
    }
}

void UWavesSystemComponent::StartWave(int32 WaveIndex)
{
    m_currentWaveIndex = WaveIndex;
    
    if (m_currentWaveIndex >= waves.Num())
    {
        OnWaveEndEvent.Broadcast();
        return;
    }

    if (!GetWorld())
        return;

    for (auto& timer : m_spawnTimers)
    {
        GetWorld()->GetTimerManager().ClearTimer(timer);
    }
    m_spawnTimers.Empty();
    m_spawnCounts.Empty();
    m_currentAliveEnemies = 0;
    
    for (int i = 0; i < waves[WaveIndex].Spawners.Num(); i++)
    {
        const auto& wave = waves[WaveIndex];
        const auto& spawnerProperties = wave.Spawners[i];
        const auto& spawner = spawnerProperties.pEnemySpawner;

        if (!spawnerProperties.AICharacterClass || !spawner)
            continue;
        
        m_spawnCounts.Add(spawnerProperties.EnemiesCount);
        m_currentAliveEnemies += spawnerProperties.EnemiesCount;
        
        FTimerHandle openDoorTimer;
        GetWorld()->GetTimerManager().SetTimer(openDoorTimer, [&spawner]()
        {
            spawner->OpenDoor();
        }, FMath::Max(wave.StartWaveDelay, 0.01f), false);

        m_spawnTimers.Add(FTimerHandle());
        const FTimerDelegate& timerDelegate = FTimerDelegate::CreateUObject(this, &UWavesSystemComponent::OnSpawnTick, i);
        GetWorld()->GetTimerManager().SetTimer(m_spawnTimers[i], timerDelegate, spawnerProperties.SpawnDelay, true, spawnerProperties.StartDelay + wave.StartWaveDelay);
    }
}

void UWavesSystemComponent::BindEnemiesOnDeath(const TArray<AAIBaseCharacter*>& Enemies)
{
    for (const auto& enemy : Enemies)
    {
        BindOneEnemyOnDeath(enemy);
    }
}

void UWavesSystemComponent::BindOneEnemyOnDeath(const AAIBaseCharacter* Enemy)
{
    if (!Enemy)
        return;
    
    const auto healthComponent = Enemy->GetHealthComponent();
    if (!healthComponent)
        return;

    healthComponent->OnDied.AddUObject(this, &UWavesSystemComponent::OnEnemyDied);
}

void UWavesSystemComponent::CloseDoorAllSpawners(int32 WaveIndex)
{
    if (!FMath::IsWithinInclusive(WaveIndex, 0, waves.Num() - 1))
        return;
    
    for (const auto& spawnProperties: waves[WaveIndex].Spawners)
    {
        if (!spawnProperties.pEnemySpawner)
            continue;

        spawnProperties.pEnemySpawner->CloseDoor();
    }
}

void UWavesSystemComponent::OnSpawnTick(int32 SpawnerIndex)
{
    if (!GetWorld())
        return;

    if (m_spawnCounts[SpawnerIndex] == 0)
    {
        GetWorld()->GetTimerManager().ClearTimer(m_spawnTimers[SpawnerIndex]);
        return;
    }
    
    const auto& spawnerProperties = waves[m_currentWaveIndex].Spawners[SpawnerIndex];
    const auto& spawner = spawnerProperties.pEnemySpawner;
    if (!spawner)
        return;
    
    const auto& enemy = spawner->Spawn(spawnerProperties.AICharacterClass);
    if (!enemy)
        return;

    m_spawnCounts[SpawnerIndex]--;
    enemy->enemyRoom = GetOwningRoom();
    BindOneEnemyOnDeath(enemy);
}

void UWavesSystemComponent::OnEnemyDied()
{
    if (--m_currentAliveEnemies == 0)
    {
        OnWaveEndEvent.Broadcast();
    }
}

void UWavesSystemComponent::OnWaveEnd()
{
    CloseDoorAllSpawners(m_currentWaveIndex);
    
    if (m_currentWaveIndex >= waves.Num() - 1)
    {
        OnAllWavesEndEvent.Broadcast();
    }
    else
    {
        StartWave(++m_currentWaveIndex);
    }
}

ARoom* UWavesSystemComponent::GetOwningRoom() const
{
    return Cast<ARoom>(GetOwner());
}