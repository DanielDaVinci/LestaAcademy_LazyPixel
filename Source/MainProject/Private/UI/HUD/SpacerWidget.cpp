// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/SpacerWidget.h"

#include "Components/HorizontalBoxSlot.h"

void USpacerWidget::SetSlateChildSize(float Value, ESlateSizeRule::Type Rule)
{
    const auto horizontalSlot = Cast<UHorizontalBoxSlot>(Slot);
    if (!horizontalSlot)
        return;

    FSlateChildSize slateChildSize;
    slateChildSize.Value = Value;
    slateChildSize.SizeRule = Rule;
    
    horizontalSlot->SetSize(slateChildSize);
}
