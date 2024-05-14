// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/LosePanelWidget.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void ULosePanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    
    BindActions();
    BindEvents();
}

void ULosePanelWidget::BindActions()
{
    if (pRestartButton)
        pRestartButton->OnClicked.AddDynamic(this, &ULosePanelWidget::OnRestartButtonClicked);

    if (pMenuButton)
        pMenuButton->OnClicked.AddDynamic(this, &ULosePanelWidget::OnMenuButtonClicked);
}

void ULosePanelWidget::BindEvents()
{
    if (const auto pHealthComponent = GetHealthComponent())
    {
        pHealthComponent->OnDied.AddUObject(this, &ULosePanelWidget::OnPlayerDied);
    }
}

void ULosePanelWidget::OnRestartButtonClicked()
{
    if (!GetWorld() || !GetWorld()->GetCurrentLevel())
        return;

    const FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
    UGameplayStatics::OpenLevel(GetWorld(), FName(CurrentLevelName), true);
}

void ULosePanelWidget::OnMenuButtonClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), FName("MenuLevel"), true);
}

void ULosePanelWidget::OnPlayerDied()
{
    if (const auto playerController = GetBasePlayerController())
    {
        playerController->SetUIModeControl();
    }
    
    FTimerHandle deathTimer;
    GetWorld()->GetTimerManager().SetTimer(deathTimer, [this]()
    {
        SetVisibility(ESlateVisibility::Visible);
    }, losePanelDelay, false);
}

ABasePlayerController* ULosePanelWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}

ABaseCharacter* ULosePanelWidget::GetOwningPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

UHealthComponent* ULosePanelWidget::GetHealthComponent() const
{
    const auto pPlayerCharacter = GetOwningPlayerCharacter();
    return pPlayerCharacter ? pPlayerCharacter->GetHealthComponent() : nullptr;
}
