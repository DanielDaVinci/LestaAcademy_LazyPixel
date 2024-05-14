// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/WinPanelWidget.h"
#include "Character/Player/BasePlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UWinPanelWidget::NativeOnInitialized() 
{
    Super::NativeOnInitialized();

    if (pMenuButton)
        pMenuButton->OnClicked.AddDynamic(this, &UWinPanelWidget::OnMenuButtonClicked);

    if (const auto playerController = GetBasePlayerController())
        playerController->SetUIModeControl();
}

void UWinPanelWidget::OnMenuButtonClicked()
{
    UGameplayStatics::OpenLevel(GetWorld(), FName("MenuLevel"), true);
}

ABasePlayerController* UWinPanelWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
