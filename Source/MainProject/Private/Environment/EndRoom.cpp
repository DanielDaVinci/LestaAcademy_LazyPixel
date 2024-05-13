// Lazy Pixel. All Rights Reserved.


#include "Environment/EndRoom.h"

#include "Character/Player/BasePlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"

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

    pInteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>("WidgetComponent");
    pInteractionWidgetComponent->SetupAttachment(GetRootComponent());
    pInteractionWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
    pInteractionWidgetComponent->SetDrawAtDesiredSize(true);
    pInteractionWidgetComponent->SetVisibility(false);
}

void AEndRoom::BeginPlay()
{
    Super::BeginPlay();
    pInteractionWidgetComponent->SetVisibility(false);
}

void AEndRoom::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    const auto playerController = Cast<ABasePlayerController>(OtherActor->GetInstigatorController());
    if (!playerController)
        return;

    if (!m_bIsEntered)
    {
        OnPlayerEnterEvent.Broadcast();
        m_bIsEntered = true;
    }

    pInteractionWidgetComponent->SetVisibility(true);
    playerController->OnInteract.BindUObject(this, &AEndRoom::OnInteract, playerController);
}

void AEndRoom::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);

    const auto playerController = Cast<ABasePlayerController>(OtherActor->GetInstigatorController());
    if (!playerController)
        return;

    pInteractionWidgetComponent->SetVisibility(false);
    playerController->OnInteract.Unbind();
}

void AEndRoom::OnInteract(ABasePlayerController* PlayerController)
{
    PlayerController->OnInteract.Unbind();
    OnPlayerInteractEvent.Broadcast();
}


