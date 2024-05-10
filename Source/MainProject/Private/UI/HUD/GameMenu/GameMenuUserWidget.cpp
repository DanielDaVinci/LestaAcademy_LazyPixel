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
    
    BindControllerInput();
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

    UGameplayStatics::SetGamePaused(GetWorld(), false);
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

FReply UGameMenuUserWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
    if ((InKeyEvent.GetKey() == EKeys::Escape) || (InKeyEvent.GetKey() == EKeys::F1))
    {
        CloseMenu();
    }
    
    return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

void UGameMenuUserWidget::OpenMenu()
{
    if (const auto pBasePlayerController = GetBasePlayerController())
    {
        pBasePlayerController->SetUIModeControl();
    }
    
    UGameplayStatics::SetGamePaused(GetWorld(), true);
    SetVisibility(ESlateVisibility::Visible);
    SetIsFocusable(true);
    SetFocus();

    OnStartMenu();
}

void UGameMenuUserWidget::CloseMenu()
{
    if (const auto pBasePlayerController = GetBasePlayerController())
    {
        pBasePlayerController->SetGameModeControl();
    }

    UGameplayStatics::SetGamePaused(GetWorld(), false);
    SetVisibility(ESlateVisibility::Hidden);
    SetIsFocusable(false);

    OnExitMenu();
}

void UGameMenuUserWidget::BindControllerInput()
{
    if (const auto basePlayerController = GetBasePlayerController())
    {
        basePlayerController->OnEscape.AddUObject(this, &UGameMenuUserWidget::OnPlayerEscapeClicked);
    }
}

void UGameMenuUserWidget::UnbindControllerInput()
{
    if (const auto basePlayerController = GetBasePlayerController())
    {
        basePlayerController->OnEscape.RemoveAll(this);
    }
}

ABasePlayerController* UGameMenuUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
