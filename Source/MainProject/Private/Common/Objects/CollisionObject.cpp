// Lazy Pixel. All Rights Reserved.


#include "Common/Objects/CollisionObject.h"

#include "Components/ShapeComponent.h"

ACollisionObject::ACollisionObject()
{
	PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);
    
    pCollisionComponent = nullptr;
}

void ACollisionObject::Enable() const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ACollisionObject::Disable() const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACollisionObject::SetObjectType(ECollisionChannel CollisionChannel) const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionObjectType(CollisionChannel);
}

void ACollisionObject::SetResponseOnlyPawn() const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pCollisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
}

void ACollisionObject::BeginPlay()
{
	Super::BeginPlay();
    
    BindAction();
}

void ACollisionObject::BindAction()
{
    if (!pCollisionComponent)
        return;
    
    pCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACollisionObject::OnCollisionComponentBeginOverlap);
    pCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &ACollisionObject::OnCollisionComponentEndOverlap);
}

void ACollisionObject::OnCollisionComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    OnBeginOverlap.Broadcast(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void ACollisionObject::OnCollisionComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    OnEndOverlap.Broadcast(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}
