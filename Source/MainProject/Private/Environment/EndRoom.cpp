// Lazy Pixel. All Rights Reserved.


#include "Environment/EndRoom.h"

#include "Components/BoxComponent.h"

AEndRoom::AEndRoom()
{
	PrimaryActorTick.bCanEverTick = false;

    pRoomCollisionComponent = CreateDefaultSubobject<UBoxComponent>("RoomCollisionComponent");
    SetRootComponent(pRoomCollisionComponent);
    pRoomCollisionComponent->SetMobility(EComponentMobility::Static);
    pRoomCollisionComponent->InitBoxExtent(FVector(300.0f, 300.0f, 50.0f));
    pRoomCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    pRoomCollisionComponent->SetCollisionObjectType(ECC_WorldStatic);
    pRoomCollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
    pRoomCollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

void AEndRoom::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    if (!m_bIsEntered)
    {
        UE_LOG(LogTemp, Error, TEXT("TEST"));
        OnPlayerEnterEvent.Broadcast();
        m_bIsEntered = true;
    }
}


