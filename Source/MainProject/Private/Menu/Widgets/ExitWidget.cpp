// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/ExitWidget.h"

#include "Components/Button.h"

void UExitWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (Agree)
    {
        Agree->OnClicked.AddDynamic(this, &UExitWidget::OnAgree);
    }

    if (Deny)
    {
        Deny->OnClicked.AddDynamic(this, &UExitWidget::OnDeny);
    }
}

void UExitWidget::OnAgree()
{
    abort();
}

void UExitWidget::OnDeny()
{
    this->RemoveFromParent();
}
