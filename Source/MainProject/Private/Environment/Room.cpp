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

    currentAliveEnemies = enemies.Num();
    
    OnPlayerEnterEvent.AddUObject(this, &ARoom::OnPlayerEnter);
    OnPlayerLeaveEvent.AddUObject(this, &ARoom::OnPlayerLeave);
    
    BindEnemyOnDeath();
    
    OpenAllDoors();
}

void ARoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARoom::OnPlayerEnter()
{
    if (currentAliveEnemies != 0)
        CloseAllDoors();
}

void ARoom::OnPlayerLeave()
{
    
}

void ARoom::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);
    
    if (Cast<APlayerCharacter>(OtherActor))
        OnPlayerEnterEvent.Broadcast();
}

void ARoom::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);
    
    if (Cast<APlayerCharacter>(OtherActor))
        OnPlayerLeaveEvent.Broadcast();
}

void ARoom::OnEnemyDied()
{
    if (--currentAliveEnemies == 0)
        OpenOutputDoors();
}

void ARoom::BindEnemyOnDeath()
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


