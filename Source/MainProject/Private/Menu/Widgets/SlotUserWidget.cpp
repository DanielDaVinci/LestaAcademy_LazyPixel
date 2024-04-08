// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/SlotUserWidget.h"

#include "Components/Button.h"

void USlotUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void USlotUserWidget::BindActions()
{
    if (SlotButton)
    {
        SlotButton->OnClicked.AddDynamic(this, &USlotUserWidget::OnSlotImageClicked);
    }

    if (DeleteButton)
    {
        DeleteButton->OnClicked.AddDynamic(this, &USlotUserWidget::OnDeleteImageClicked);
    }
}

void USlotUserWidget::OnSlotImageClicked()
{
    OnSlotClicked.Broadcast();
}

void USlotUserWidget::OnDeleteImageClicked()
{
    OnDeleteClicked.Broadcast();
}
