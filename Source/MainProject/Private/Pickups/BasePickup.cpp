// Lazy Pixel. All Rights Reserved.


#include "Pickups/BasePickup.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/BasePlayerController.h"

ABasePickup::ABasePickup()
{
	PrimaryActorTick.bCanEverTick = false;

	pCollisionComponent = CreateDefaultSubobject<USphereComponent>("SphereComponent");
    pCollisionComponent->InitSphereRadius(50.0f);
    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    pCollisionComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
    pCollisionComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    SetRootComponent(pCollisionComponent);

    pInteractWidget = CreateDefaultSubobject<UWidgetComponent>("InteractWidgetComponent");
    pInteractWidget->SetupAttachment(GetRootComponent());
    pInteractWidget->SetWidgetSpace(EWidgetSpace::Screen);
    pInteractWidget->SetDrawAtDesiredSize(true);
}

void ABasePickup::BeginPlay()
{
	Super::BeginPlay();
    pInteractWidget->SetVisibility(false);
}

void ABasePickup::NotifyActorBeginOverlap(AActor* OtherActor) 
{
    Super::NotifyActorBeginOverlap(OtherActor);

    const auto playerController = GetBasePlayerController(OtherActor);
    if (!playerController)
        return;

    pInteractWidget->SetVisibility(true);
    playerController->OnInteract.BindUObject(this, &ABasePickup::OnPickUpHandle, Cast<APlayerCharacter>(OtherActor));
}

void ABasePickup::NotifyActorEndOverlap(AActor* OtherActor) 
{
    Super::NotifyActorEndOverlap(OtherActor);

    const auto playerController = GetBasePlayerController(OtherActor);
    if (!playerController)
        return;

    pInteractWidget->SetVisibility(false);
    playerController->OnInteract.Unbind();
}

void ABasePickup::OnPickUpHandle(APlayerCharacter* PlayerCharacter)
{
    OnPickUpEvent();
}

void ABasePickup::DisableCollision() 
{
    pCollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

ABasePlayerController* ABasePickup::GetBasePlayerController(AActor* Character) const
{
    if (const auto PlayerCharacter = Cast<APlayerCharacter>(Character))
        return PlayerCharacter->GetPlayerController();

    return nullptr;
}

