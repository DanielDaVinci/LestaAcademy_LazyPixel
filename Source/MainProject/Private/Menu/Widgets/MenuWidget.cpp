// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/MenuWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

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
    const FName FirstLevel = "FirstLevel";
    UGameplayStatics::OpenLevel(this, FirstLevel);
}

void UMenuWidget::OnAboutUs()
{
    if (AboutUsWidgetClass)
    {
        if (const auto AboutUsWidget = CreateWidget<UUserWidget>(GetWorld(), AboutUsWidgetClass))
        {
            AboutUsWidget->AddToViewport();
        }
    }
}

void UMenuWidget::OnSettings()
{
    if (SettingsWidgetClass)
    {
        if (const auto SettingsWidget = CreateWidget<UUserWidget>(GetWorld(), SettingsWidgetClass))
        {
            SettingsWidget->AddToViewport();
        }
    }
}

void UMenuWidget::OnExit()
{
    if (ExitWidgetClass)
    {
        if (const auto ExitWidget = CreateWidget<UUserWidget>(GetWorld(), ExitWidgetClass))
        {
            ExitWidget->AddToViewport();
        }
    }
}
