// Lazy Pixel. All Rights Reserved.

#include "Environment/FloorManager.h"

AFloorManager::AFloorManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AFloorManager::BeginPlay()
{
    Super::BeginPlay();

    BindEvents();

    Preparation();
}


void AFloorManager::BindEvents()
{
    for (const auto& room : priorityQueueRooms)
    {
        if (!room)
            continue;
        
        room->OnPlayerEnterEvent.AddUObject(this, &AFloorManager::OnPlayerEnterRoom);
        room->OnAllEnemiesDied.AddUObject(this, &AFloorManager::OnClearRoom);
    }
}

void AFloorManager::OnPlayerEnterRoom(ARoom* Room)
{
    if (!Room)
        return;
    
    m_currentRoomIndex = priorityQueueRooms.Find(Room);

    Room->CloseAllDoors();
    Room->TurnOnLight();
    Room->SetCeilingVisibility(false);

    if (!(m_currentRoomIndex - 1 >= 0 && priorityQueueRooms[m_currentRoomIndex - 1]))
        return;

    ARoom* prevRoom = priorityQueueRooms[m_currentRoomIndex - 1];
    prevRoom->SetCeilingVisibility(true);
    prevRoom->TurnOffLight();

    if (!(m_currentRoomIndex - 2 >= 0 && priorityQueueRooms[m_currentRoomIndex - 2]))
        return;

    priorityQueueRooms[m_currentRoomIndex - 2]->DestroyActorsInRoom();
}

void AFloorManager::OnClearRoom(ARoom* Room)
{
    if (!Room)
        return;
    
    m_currentRoomIndex = priorityQueueRooms.Find(Room);
    Room->OpenOutputDoors();

    if (!(m_currentRoomIndex + 1 < priorityQueueRooms.Num() && priorityQueueRooms[m_currentRoomIndex + 1]))
        return;

    ARoom* nextRoom = priorityQueueRooms[m_currentRoomIndex + 1];
    nextRoom->TurnOnLight();
    nextRoom->SetCeilingVisibility(false);
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

    m_currentRoomIndex = 0;
    ARoom* currentRoom = priorityQueueRooms[m_currentRoomIndex];

    if (!currentRoom)
        return;

    currentRoom->CloseAllDoors();
    currentRoom->OpenInputDoors();
    currentRoom->SetCeilingVisibility(false);
    currentRoom->TurnOnLight();
}
