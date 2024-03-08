// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/LosePanelWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void ULosePanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void ULosePanelWidget::BindActions()
{
    if (pRestartButton)
        pRestartButton->OnClicked.AddDynamic(this, &ULosePanelWidget::OnRestartButtonClicked);

    if (pMenuButton)
        pMenuButton->OnClicked.AddDynamic(this, &ULosePanelWidget::OnMenuButtonClicked);
}

void ULosePanelWidget::OnRestartButtonClicked()
{
    if (!GetWorld() || !GetWorld()->GetCurrentLevel())
        return;

    const FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(GetWorld());
    UGameplayStatics::OpenLevel(GetWorld(), FName(CurrentLevelName), true); 
}

void ULosePanelWidget::OnMenuButtonClicked()
{
    
}
