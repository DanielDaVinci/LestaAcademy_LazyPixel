// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/SettingsWidget.h"

#include "Components/Button.h"
#include "Components/Image.h"

void USettingsWidget::SetBackgroundVisibility(ESlateVisibility InVisibility) const
{
    BackgroundImage->SetVisibility(InVisibility);
}

void USettingsWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void USettingsWidget::BindActions()
{
    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &USettingsWidget::OnExit);
    }
}

void USettingsWidget::OnExit()
{
    SetVisibility(ESlateVisibility::Hidden);
}
