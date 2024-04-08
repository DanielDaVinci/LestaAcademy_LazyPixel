// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/MenuWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Menu/Widgets/AboutUsWidget.h"
#include "Menu/Widgets/ChoiceSaveSlotUserWidget.h"
#include "Menu/Widgets/ExitWidget.h"
#include "Menu/Widgets/SettingsWidget.h"

void UMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UMenuWidget::BindActions()
{
    if (StartGameButton)
    {
        StartGameButton->OnClicked.AddDynamic(this, &UMenuWidget::OnStartGame);
    }

    if (AboutUs)
    {
        AboutUs->OnClicked.AddDynamic(this, &UMenuWidget::OnAboutUs);
    }

    if (Settings)
    {
        Settings->OnClicked.AddDynamic(this, &UMenuWidget::OnSettings);
    }

    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &UMenuWidget::OnExit);
    }
}

void UMenuWidget::OnStartGame()
{
    if (ChoiceSaveSlotUserWidget)
    {
        ChoiceSaveSlotUserWidget->SetVisibility(ESlateVisibility::Visible);
    }
}

void UMenuWidget::OnAboutUs()
{
    if (AboutUsUserWidget)
    {
        AboutUsUserWidget->SetVisibility(ESlateVisibility::Visible);
    }
}

void UMenuWidget::OnSettings()
{
    if (SettingsUserWidget)
    {
        SettingsUserWidget->SetVisibility(ESlateVisibility::Visible);
    }
}

void UMenuWidget::OnExit()
{
    if (ExitUserWidget)
    {
        ExitUserWidget->SetVisibility(ESlateVisibility::Visible);
    }
}
