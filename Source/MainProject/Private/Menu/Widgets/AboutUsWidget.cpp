// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/AboutUsWidget.h"

#include "Components/Button.h"

void UAboutUsWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UAboutUsWidget::BindActions()
{
    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &UAboutUsWidget::OnExit);
    }
}

void UAboutUsWidget::OnExit()
{
    SetVisibility(ESlateVisibility::Hidden);
}
