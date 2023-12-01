// Lazy Pixel. All Rights Reserved.


#include "Environment/Door.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = false;

    pRootSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pRootSceneComponent);

    pWallDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("WallDoorMeshComponent");
    pWallDoorMeshComponent->SetupAttachment(GetRootComponent());

    pLeftDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("LeftDoorSceneComponent");
    pLeftDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pLeftDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("LeftDoorMeshComponent");
    pLeftDoorMeshComponent->SetupAttachment(pLeftDoorSceneComponent);

    pRightDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("RightDoorSceneComponent");
    pRightDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pRightDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("RightDoorMeshComponent");
    pRightDoorMeshComponent->SetupAttachment(pRightDoorSceneComponent);
}

