// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/AboutUsWidget.h"

#include "Components/Button.h"

void UAboutUsWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &UAboutUsWidget::OnExit);
    }
}

void UAboutUsWidget::OnExit()
{
    this->RemoveFromParent();
}
