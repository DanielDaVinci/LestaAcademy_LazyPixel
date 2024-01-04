// Lazy Pixel. All Rights Reserved.


#include "Environment/Room.h"

#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"

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

void ARoom::BeginPlay()
{
	Super::BeginPlay();
    
    OnPlayerEnterEvent.AddUObject(this, &ARoom::OnPlayerEnter);
    OnPlayerLeaveEvent.AddUObject(this, &ARoom::OnPlayerLeave);

    BindEnemies();
    
    OpenAllDoors();
}

void ARoom::OnPlayerEnter(ARoom* Room)
{
    if (currentAliveEnemies != 0)
        CloseAllDoors();
}

void ARoom::OnPlayerLeave(ARoom* Room)
{
    
}

void ARoom::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    if (Cast<APlayerCharacter>(OtherActor))
    {
        OnPlayerEnterEvent.Broadcast(this);
        IsEntered = true;
    }
}

void ARoom::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);
    
    if (Cast<APlayerCharacter>(OtherActor))
    {
        OnPlayerLeaveEvent.Broadcast(this);
    }
}

void ARoom::OnEnemyDied()
{
    if (--currentAliveEnemies == 0)
    {
        OpenOutputDoors();
    }
}

void ARoom::BindEnemies()
{
    FindEnemies();
    BindEnemiesOnDeath();

    currentAliveEnemies = enemies.Num();
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


