// Lazy Pixel. All Rights Reserved.


#include "Common/Objects/CollisionObject.h"

#include "MainProjectCoreTypes.h"
#include "Components/ShapeComponent.h"

ACollisionObject::ACollisionObject()
{
	PrimaryActorTick.bCanEverTick = false;

    pSceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
    SetRootComponent(pSceneComponent);
    
    pCollisionComponent = nullptr;
}

void ACollisionObject::Enable(bool bWithUpdateOverlaps) const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

    if (bWithUpdateOverlaps)
        UpdateOverlaps();
}

void ACollisionObject::Disable() const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACollisionObject::UpdateOverlaps() const
{
    pCollisionComponent->UpdateOverlaps();
}

bool ACollisionObject::HasOverlappingActors(const TSubclassOf<AActor>& FindClass) const
{
    TArray<AActor*> overlappingActors;
    GetOverlappingActors(overlappingActors, FindClass);

    return !overlappingActors.IsEmpty();
}

void ACollisionObject::GetOverlappingActors(TArray<AActor*>& OverlappingActors, const TSubclassOf<AActor>& ClassFilter) const
{
    pCollisionComponent->GetOverlappingActors(OverlappingActors, ClassFilter);
}

void ACollisionObject::SetObjectType(const ECollisionChannel CollisionChannel) const
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

void ACollisionObject::SetResponseOnlyEnemy() const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
    pCollisionComponent->SetCollisionResponseToChannel(ECC_Enemy, ECollisionResponse::ECR_Overlap);
}

void ACollisionObject::SetResponseToChannel(const ECollisionChannel CollisionChannel, const ECollisionResponse CollisionResponse) const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionResponseToChannel(CollisionChannel, CollisionResponse);
}

void ACollisionObject::SetResponseToAllChannels(ECollisionResponse CollisionResponse) const
{
    if (!pCollisionComponent)
        return;

    pCollisionComponent->SetCollisionResponseToAllChannels(CollisionResponse);
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
