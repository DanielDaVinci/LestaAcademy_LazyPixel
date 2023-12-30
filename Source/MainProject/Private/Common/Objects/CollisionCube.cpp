// Lazy Pixel. All Rights Reserved.


#include "Common/Objects/CollisionCube.h"

#include "Components/BoxComponent.h"

ACollisionCube::ACollisionCube()
{
    pCollisionComponent = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
    pCollisionComponent->SetupAttachment(GetRootComponent());
    
    Disable();
    SetObjectType(ECC_WorldDynamic);
    SetResponseOnlyPawn();
}

void ACollisionCube::SetBoxExtent(const FVector& Size) const
{
    UBoxComponent* boxComponent = Cast<UBoxComponent>(pCollisionComponent);
    if (!boxComponent)
        return;

    boxComponent->SetBoxExtent(Size, true);
}
