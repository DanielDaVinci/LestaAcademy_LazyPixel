// Lazy Pixel. All Rights Reserved.


#include "Environment/Door.h"

#include "AITypes.h"
#include "Character/Player/PlayerCharacter.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = false;

    pRootSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pRootSceneComponent);

    pCollisionComponent = CreateDefaultSubobject<UBoxComponent>("CollisionComponent");
    pCollisionComponent->SetupAttachment(GetRootComponent());
    pCollisionComponent->SetCollisionObjectType(ECC_WorldStatic);
    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    pCollisionComponent->SetCanEverAffectNavigation(false);

    pArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
    pArrowComponent->SetupAttachment(GetRootComponent());
    pArrowComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
    pArrowComponent->ArrowSize = 2.0f;
    pArrowComponent->ArrowColor = FColor::Blue;

    pWallDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("WallDoorMeshComponent");
    pWallDoorMeshComponent->SetupAttachment(GetRootComponent());
    pWallDoorMeshComponent->SetCanEverAffectNavigation(false);

    pLeftDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("LeftDoorSceneComponent");
    pLeftDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pLeftDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("LeftDoorMeshComponent");
    pLeftDoorMeshComponent->SetupAttachment(pLeftDoorSceneComponent);
    pLeftDoorMeshComponent->SetCanEverAffectNavigation(false);

    pRightDoorSceneComponent = CreateDefaultSubobject<USceneComponent>("RightDoorSceneComponent");
    pRightDoorSceneComponent->SetupAttachment(pWallDoorMeshComponent);
    pRightDoorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("RightDoorMeshComponent");
    pRightDoorMeshComponent->SetupAttachment(pRightDoorSceneComponent);
    pRightDoorMeshComponent->SetCanEverAffectNavigation(false);
}

void ADoor::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);

    if (IsPlayerEntry(OtherActor))
        OnEnterDoor.Broadcast();
}

void ADoor::BlockDoor(ECollisionChannel Channel) const
{
    pCollisionComponent->SetCollisionResponseToChannel(Channel, ECR_Block);
}

void ADoor::UnblockDoor(ECollisionChannel Channel) const
{
    pCollisionComponent->SetCollisionResponseToChannel(Channel, ECR_Overlap);
}

bool ADoor::IsPlayerEntry(const AActor* OtherActor) const
{
    if (!OtherActor->IsA<APlayerCharacter>())
        return false;

    const FVector vectorToActor = (OtherActor->GetActorLocation() - GetActorLocation()).GetSafeNormal();
    const FVector arrowDirection = pArrowComponent->GetComponentRotation().Vector();
    const float angle = FMath::Abs(FMath::Acos(vectorToActor.CosineAngle2D(arrowDirection)));
    
    return angle < PI / 2.0f;
}




