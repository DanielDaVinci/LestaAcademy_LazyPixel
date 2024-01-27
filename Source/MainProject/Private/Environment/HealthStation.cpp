// Lazy Pixel. All Rights Reserved.


#include "Environment/HealthStation.h"
#include "Blueprint/UserWidget.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SlateWrapperTypes.h"

AHealthStation::AHealthStation()
{
    PrimaryActorTick.bCanEverTick = true;
    Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
    RootComponent = Collider;
    HealAmount = 50.0f;
    InteractionPromptWidgetClass = nullptr;
}

void AHealthStation::BeginPlay()
{
	Super::BeginPlay();

    // Spawn the interaction prompt widget
    if (InteractionPromptWidgetClass)
    {
        InteractionPromptWidget = CreateWidget<UUserWidget>(GetWorld(), InteractionPromptWidgetClass);
        if (InteractionPromptWidget)
        {
            InteractionPromptWidget->AddToViewport();
            InteractionPromptWidget->SetVisibility(ESlateVisibility::Hidden);
        }
    }
}


void AHealthStation::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
}

void AHealthStation::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);

    const auto Character = Cast<ACharacter>(OtherActor);
    if (!Character)
        return;
    
    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    if (!playerController)
        return;
    
    m_delegateHandle = playerController->OnInteract.AddUObject(this, &AHealthStation::Heal);
    
    UE_LOG(LogTemp, Warning, TEXT("Distance less than 200"))
    // Display the interaction prompt widget
    if (InteractionPromptWidget)
    {
        InteractionPromptWidget->SetVisibility(ESlateVisibility::Visible);
    }
}

void AHealthStation::NotifyActorEndOverlap(AActor* OtherActor)
{
    Super::NotifyActorEndOverlap(OtherActor);

    const auto Character = Cast<ACharacter>(OtherActor);
    if (!Character)
        return;
    
    const auto playerController = Cast<ABasePlayerController>(Character->GetController());
    if (!playerController)
        return;
    
    playerController->OnInteract.Remove(m_delegateHandle);
    
    // Hide the interaction prompt widget
    if (InteractionPromptWidget)
    {
        InteractionPromptWidget->SetVisibility(ESlateVisibility::Hidden);
    }
}

void AHealthStation::Heal()
{
    APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
    PlayerCharacter->GetComponentByClass<UHealthComponent>()->Heal(HealAmount);
}
