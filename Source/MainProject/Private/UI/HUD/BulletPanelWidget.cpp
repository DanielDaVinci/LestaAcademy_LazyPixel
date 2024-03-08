// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/BulletPanelWidget.h"

#include "Character/Player/BasePlayerController.h"

void UBulletPanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UBulletPanelWidget::BindActions()
{
    
}

ABasePlayerController* UBulletPanelWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
