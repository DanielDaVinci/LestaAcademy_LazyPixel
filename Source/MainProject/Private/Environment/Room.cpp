// Lazy Pixel. All Rights Reserved.


#include "Environment/Room.h"

#include "MainProjectCoreTypes.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/LightComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Environment/Components/WavesSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavMesh/NavMeshBoundsVolume.h"

ARoom::ARoom()
{
	PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    pSceneComponent->SetMobility(EComponentMobility::Stationary);
    SetRootComponent(pSceneComponent);

    pRoomCollisionComponent = CreateDefaultSubobject<UBoxComponent>("RoomCollisionComponent");
    pRoomCollisionComponent->SetupAttachment(GetRootComponent());
    pRoomCollisionComponent->SetMobility(EComponentMobility::Stationary);
    pRoomCollisionComponent->InitBoxExtent(FVector(300.0f, 300.0f, 50.0f));
    pRoomCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    pRoomCollisionComponent->SetCollisionObjectType(ECC_WorldStatic);
    pRoomCollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
    pRoomCollisionComponent->SetCollisionResponseToChannel(ECC_Enemy, ECR_Overlap);

    pWavesSystemComponent = CreateDefaultSubobject<UWavesSystemComponent>("WavesSystemComponent");
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

void ARoom::SetCeilingVisibility(bool Visible)
{
    if (!roomCeiling)
        return;

    roomCeiling->SetActorHiddenInGame(!Visible);
}

void ARoom::BeginPlay()
{
	Super::BeginPlay();
    
    BindInputDoorsForEnter();
    BindLightSources();

    SetupCeiling();
    BindEvents();
}

void ARoom::BindEvents()
{
    pWavesSystemComponent->OnAllWavesEndEvent.AddUObject(this, &ARoom::OnAllWavesEnd);
}

void ARoom::OnPlayerEnter()
{
    m_isEntered = true;
    OnPlayerEnterEvent.Broadcast(this);
    
    pWavesSystemComponent->StartWaves();
}

void ARoom::OnAllWavesEnd()
{
    OnAllEnemiesDied.Broadcast(this);
}

void ARoom::BindInputDoorsForEnter()
{
    for (const auto& door: inputDoors)
    {
        if (!door)
            return;
        
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
        if (!component)
            continue;
        
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

void ARoom::SetupCeiling() const
{
    if (!roomCeiling)
        return;

    roomCeiling->SetActorEnableCollision(false);
}

void ARoom::CloseAllDoors()
{
    for (const auto& door : inputDoors)
    {
        if (!door)
            continue;
        
        door->BlockDoor(ECC_Pawn);
        door->Close();
    }

    for (const auto& door : outputDoors)
    {
        if (!door)
            continue;
        
        door->BlockDoor(ECC_Pawn);
        door->Close();
    }
}

void ARoom::OpenAllDoors()
{
    OpenInputDoors();
    OpenOutputDoors();
}

void ARoom::OpenOutputDoors()
{
    for (const auto& door : outputDoors)
    {
        if (!door)
            continue;
        
        door->UnblockDoor(ECC_Pawn);
        door->Open();
    }
}

void ARoom::OpenInputDoors()
{
    for (const auto& door : inputDoors)
    {
        if (!door)
            continue;
        
        door->UnblockDoor(ECC_Pawn);
        door->Open();
    }
}

void ARoom::DestroyActorsInRoom() const
{
    if (!GetWorld())
        return;
   
    TArray<UBoxComponent*> boxComponents;
    GetComponents(UBoxComponent::StaticClass(), boxComponents);
    
    TArray<FBox> volumes;
    for (const auto& component: boxComponents)
    {
        if (!component)
            continue;
        
        volumes.Push(component->Bounds.GetBox());
    }
    
    TArray<AActor*> findedActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStaticMeshActor::StaticClass(), findedActors);
    
    for (const auto& actor : findedActors)
    {
        if (actor == roomCeiling)
            continue;
        
        UE_LOG(LogTemp, Display, TEXT("Finded: %s"), *actor->GetName());
        
        bool isInside = false;
        for (const auto& box: volumes)
        {
            isInside = box.IsInsideXY(actor->GetActorLocation());
            if (isInside)
                break;
        }

        if (isInside)
        {
            UE_LOG(LogTemp, Display, TEXT("Deleted: %s"), *actor->GetName());
            actor->Destroy();
        }   
    }
}


