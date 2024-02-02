// Lazy Pixel. All Rights Reserved.


#include "Environment/Room.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/LightComponent.h"
#include "Kismet/GameplayStatics.h"

ARoom::ARoom()
{
	PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    pSceneComponent->SetMobility(EComponentMobility::Static);
    SetRootComponent(pSceneComponent);

    pRoomCollisionComponent = CreateDefaultSubobject<UBoxComponent>("RoomCollisionComponent");
    pRoomCollisionComponent->SetupAttachment(GetRootComponent());
    pRoomCollisionComponent->SetMobility(EComponentMobility::Static);
    pRoomCollisionComponent->InitBoxExtent(FVector(300.0f, 300.0f, 50.0f));
    pRoomCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    pRoomCollisionComponent->SetCollisionObjectType(ECC_WorldStatic);
    pRoomCollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
    pRoomCollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    
}

void ARoom::TurnOffLight()
{
    for (auto& sources: lightSources)
    {
        sources->GetLightComponent()->SetVisibility(false);
    }
}

void ARoom::TurnOnLight()
{
    for (auto& sources: lightSources)
    {
        sources->GetLightComponent()->SetVisibility(true);
    }
}

void ARoom::BeginPlay()
{
	Super::BeginPlay();
    
    BindInputDoorsForEnter();
    BindEnemies();
    BindLightSources();

    TurnOffLight();
    OpenAllDoors();
}

void ARoom::OnPlayerEnter()
{
    m_isEntered = true;
    TurnOnLight();
    
    if (m_currentAliveEnemies != 0)
        CloseAllDoors();
}

void ARoom::BindInputDoorsForEnter()
{
    for (auto& door: inputDoors)
    {
        door->OnEnterDoor.AddUObject(this, &ARoom::OnPlayerEnter);
    }
}

void ARoom::BindLightSources()
{
    if (!GetWorld())
        return;
   
    TArray<UBoxComponent*> boxComponents;
    GetComponents(UBoxComponent::StaticClass(), boxComponents);
    
    TArray<FBox> volumes;
    for (const auto& component: boxComponents)
    {
        volumes.Push(component->Bounds.GetBox());
    }
    
    TArray<AActor*> findedActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALight::StaticClass(), findedActors);
    
    for (const auto& actor : findedActors)
    {
        const auto lightSource = Cast<ALight>(actor);
        if (!lightSource)
            continue;

        bool isInside = false;
        for (auto box: volumes)
        {
            isInside = box.IsInside(lightSource->GetActorLocation());
            if (isInside)
                break;
        }

        if (isInside)
        {
            lightSources.Push(lightSource); 
        }   
    }
}

void ARoom::OnEnemyDied()
{
    if (--m_currentAliveEnemies == 0)
    {
        OpenOutputDoors();
    }
}

void ARoom::BindEnemies()
{
    FindEnemies();
    BindEnemiesOnDeath();

    m_currentAliveEnemies = enemies.Num();
}

void ARoom::FindEnemies()
{
    TArray<AActor*> overlappingActors;
    UpdateOverlaps(false);
    GetOverlappingActors(overlappingActors);

    for (auto actor: overlappingActors)
    {
        auto enemy = Cast<AAIBaseCharacter>(actor);
        if (!enemy)
            continue;

        enemies.Add(enemy);
        enemy->enemyRoom = this;
    }
}

void ARoom::BindEnemiesOnDeath()
{
    for (const auto enemy : enemies)
    {
        const auto healthComponent = enemy->GetComponentByClass<UHealthComponent>();
        if (!healthComponent)
            continue;

        healthComponent->OnDeath.AddUObject(this, &ARoom::OnEnemyDied);
    }
}

void ARoom::CloseAllDoors()
{
    for (const auto door : inputDoors)
    {
        door->Close();
    }

    for (const auto door : outputDoors)
    {
        door->Close();
    }
}

void ARoom::OpenAllDoors()
{
    for (const auto door : inputDoors)
    {
        door->Open();
    }

    for (const auto door : outputDoors)
    {
        door->Open();
    }
}

void ARoom::OpenOutputDoors()
{
    for (const auto door : outputDoors)
    {
        door->Open();
    }
}


