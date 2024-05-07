// Lazy Pixel. All Rights Reserved.

#include "Environment/FloorManager.h"

#include "MainProjectGameInstance.h"
#include "MainProjectGameModeBase.h"
#include "Environment/EndRoom.h"
#include "Kismet/GameplayStatics.h"

AFloorManager::AFloorManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AFloorManager::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    ApplySavedData();
}

void AFloorManager::PreBeginPlay()
{
    
}

void AFloorManager::BeginPlay()
{
    Super::BeginPlay();

    BindEvents();
}

void AFloorManager::PostBeginPlay()
{
    Preparation();
}

void AFloorManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
}

void AFloorManager::BindEvents()
{
    for (auto Iter = priorityQueueRooms.CreateIterator(); Iter; ++Iter)
    {
        const auto room = *Iter;
        if (!room)
            continue;
        
        room->OnPlayerEnterEvent.AddUObject(this, &AFloorManager::OnPlayerEnterRoom, Iter.GetIndex());
        room->OnAllEnemiesDied.AddUObject(this, &AFloorManager::OnClearRoom, Iter.GetIndex());
    }

    if (endRoom)
    {
        endRoom->OnPlayerEnterEvent.AddUObject(this, &AFloorManager::OnPlayerEnterEndRoom);
    }
}

void AFloorManager::Preparation()
{
    if (!priorityQueueRooms.Num())
        return;
    
    for (const auto& room : priorityQueueRooms)
    {
        if (!room)
            continue;
        
        room->CloseAllDoors();
        room->TurnOffLight();
        room->SetCeilingVisibility(true);
    }

    SetupRoomForStartup(m_currentRoomIndex);
    SetupRoomForEnter(m_currentRoomIndex + 1);
}

void AFloorManager::ApplySavedData()
{
    const auto gameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!gameInstance)
        return;

    const auto progressSaveGame = gameInstance->GetCurrentSlot<UProgressSaveGame>();
    if (!progressSaveGame)
        return;
    
    m_currentRoomIndex = progressSaveGame->ProgressData.RoomIndex;
    SetupRoomForStartup(m_currentRoomIndex);
}

void AFloorManager::SaveData()
{
    const auto gameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!gameInstance)
        return;

    const auto progressSaveGame = gameInstance->GetCurrentSlot<UProgressSaveGame>();
    if (!progressSaveGame)
        return;
    
    progressSaveGame->ProgressData.RoomIndex = m_currentRoomIndex;
    gameInstance->SaveCurrentSlot();
}

void AFloorManager::OnPlayerEnterRoom_Implementation(int32 Index)
{
    if (!priorityQueueRooms.IsValidIndex(Index))
        return;
    
    const auto Room = priorityQueueRooms[Index];
    if (!Room)
        return;
    
    m_currentRoomIndex = Index;
    
    SetupRoomForFight(m_currentRoomIndex);
    SetupRoomAfterExit(m_currentRoomIndex - 1);
    CleanRoom(m_currentRoomIndex - 2);
}

void AFloorManager::OnClearRoom_Implementation(int32 Index)
{
    SetupRoomForEnter(Index + 1);
    SaveData();
}

void AFloorManager::SetupRoomForStartup(int32 Index)
{
    ARoom* room = SafeGetRoom(Index);
    if (!room)
        return;

    room->SetAsStart();
    room->HideEnemiesInRoom();
    room->TurnOnLight();
    room->SetCeilingVisibility(false);
}

void AFloorManager::SetupRoomForEnter(int32 Index)
{
    if (Index >= priorityQueueRooms.Num())
    {
        if (const auto currentRoom = SafeGetCurrentRoom())
        {
            currentRoom->OpenOutputDoors();
        }
    }
    
    ARoom* room = SafeGetRoom(Index);
    if (!room)
        return;
    
    room->OpenInputDoors();
    room->TurnOnLight();
    room->SetCeilingVisibility(false);
}

void AFloorManager::SetupRoomForFight(int32 Index)
{
    const auto room = SafeGetRoom(Index);
    if (!room)
        return;

    room->CloseAllDoors();
    room->TurnOnLight();
    room->SetCeilingVisibility(false);
}

void AFloorManager::SetupRoomAfterExit(int32 Index)
{
    ARoom* room = SafeGetRoom(Index);
    if (!room)
        return;
    
    room->SetCeilingVisibility(true);
    room->TurnOffLight();
}

void AFloorManager::CleanRoom(int32 Index)
{
    const ARoom* room = SafeGetRoom(Index);
    if (!room)
        return;

    room->DestroyActorsInRoom();
}

void AFloorManager::OnPlayerEnterEndRoom()
{
    if (!nextLevel)
        return;

    const auto gameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!gameInstance)
        return;
    
    const auto currentSlot = gameInstance->GetCurrentSlot<UProgressSaveGame>();
    if (!currentSlot)
        return;

    currentSlot->ProgressData.LevelIndex += 1;
    currentSlot->ProgressData.RoomIndex = -1;
    gameInstance->SaveCurrentSlot();
    gameInstance->AsyncLevelLoad("/Game/Levels/" + nextLevel->GetName());
}

ARoom* AFloorManager::SafeGetRoom(int32 Index)
{
    if (!priorityQueueRooms.IsValidIndex(Index))
        return nullptr;
    
    return priorityQueueRooms[Index];
}

ARoom* AFloorManager::SafeGetCurrentRoom()
{
    return SafeGetRoom(m_currentRoomIndex);
}
