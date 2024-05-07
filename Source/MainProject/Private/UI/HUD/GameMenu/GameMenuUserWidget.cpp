// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/GameMenu/GameMenuUserWidget.h"

#include "MainProjectGameInstance.h"
#include "Character/Player/BasePlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Menu/Widgets/SettingsWidget.h"

void UGameMenuUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UGameMenuUserWidget::BindActions()
{
    if (pContinueButton)
    {
        pContinueButton->OnClicked.AddDynamic(this, &UGameMenuUserWidget::OnContinueButtonClicked);
    }

    if (pSettingsButton)
    {
        pSettingsButton->OnClicked.AddDynamic(this, &UGameMenuUserWidget::OnSettingsButtonClicked);
    }

    if (pExitButton)
    {
        pExitButton->OnClicked.AddDynamic(this, &UGameMenuUserWidget::OnExitButtonClicked);
    }

    if (const auto basePlayerController = GetBasePlayerController())
    {
        basePlayerController->OnEscape.AddUObject(this, &UGameMenuUserWidget::OnPlayerEscapeClicked);
    }
}

void UGameMenuUserWidget::OnContinueButtonClicked()
{
    CloseMenu();
}

void UGameMenuUserWidget::OnSettingsButtonClicked()
{
    pSettingsUserWidget->SetVisibility(ESlateVisibility::Visible);
}

void UGameMenuUserWidget::OnExitButtonClicked()
{
    const auto projectGameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!projectGameInstance)
        return;

    projectGameInstance->AsyncLevelLoad(MenuLevelName);
}

void UGameMenuUserWidget::OnPlayerEscapeClicked()
{
    switch (GetVisibility())
    {
        case ESlateVisibility::Hidden:
            OpenMenu();
            break;
        case ESlateVisibility::Visible:
            CloseMenu();
            break;
        default:
            CloseMenu();
            break;
    }
}

void UGameMenuUserWidget::OpenMenu()
{
    SetVisibility(ESlateVisibility::Visible);
    UGameplayStatics::SetGamePaused(GetWorld(), true);

    if (const auto pBasePlayerController = GetBasePlayerController())
    {
        pBasePlayerController->SetUIModeControl();
    }

    UE_LOG(LogTemp, Error, TEXT("OPEN"));

    OnStartMenu();
}

void UGameMenuUserWidget::CloseMenu()
{
    SetVisibility(ESlateVisibility::Hidden);
    UGameplayStatics::SetGamePaused(GetWorld(), false);

    if (const auto pBasePlayerController = GetBasePlayerController())
    {
        pBasePlayerController->SetGameModeControl();
    }

    UE_LOG(LogTemp, Error, TEXT("CLOSE"));

    OnExitMenu();
}

ABasePlayerController* UGameMenuUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
