// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/HealthCellWidget.h"

#include "Components/HorizontalBoxSlot.h"
#include "Components/ProgressBar.h"

void UHealthCellWidget::SetHealthPercent(float Percent)
{
    pHealthBar->SetPercent(Percent);
}

void UHealthCellWidget::SetSlateChildSize(float Value, ESlateSizeRule::Type Rule)
{
    const auto horizontalSlot = Cast<UHorizontalBoxSlot>(Slot);
    if (!horizontalSlot)
        return;

    FSlateChildSize slateChildSize;
    slateChildSize.Value = Value;
    slateChildSize.SizeRule = Rule;
    
    horizontalSlot->SetSize(slateChildSize);
}
