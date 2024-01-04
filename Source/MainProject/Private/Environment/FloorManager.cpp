// Lazy Pixel. All Rights Reserved.

#include "Environment/FloorManager.h"

#include "Kismet/GameplayStatics.h"

AFloorManager::AFloorManager()
{
    PrimaryActorTick.bCanEverTick = false;

}

void AFloorManager::BeginPlay()
{
    Super::BeginPlay();

    BindRooms();
}

void AFloorManager::BindRooms()
{
    TArray<AActor*> findingRooms;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARoom::StaticClass(), findingRooms);

    for (auto actor : findingRooms)
    {
        auto room = Cast<ARoom>(actor);
        if (!room)
            continue;
        
        rooms.Add(room);
    }
}

void AFloorManager::BindRoomsEntry()
{
    for (auto room : rooms)
    {
        room->OnPlayerEnterEvent.AddUObject(this, &AFloorManager::OnPlayerEnterRoom);
    }
}

void AFloorManager::OnPlayerEnterRoom(ARoom* Room)
{
    m_pCurrentRoom = Room;
}
