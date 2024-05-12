// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/BossPropertyPanelWidget.h"
#include "UI/HUD/BossHealthWidget.h"

void UBossPropertyPanelWidget::RebindEvents(ABaseCharacter* Character) 
{
    if (BossHealthWidget)
        BossHealthWidget->RebindEvents(Character);
}
