// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/PlayerHudWidget.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "UI/HUD/Dialogue/DialogueSystemUserWidget.h"

void UPlayerHudWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UPlayerHudWidget::BindActions()
{
    
}

ABaseCharacter* UPlayerHudWidget::GetOwningBaseCharacter() const
{
    return Cast<ABaseCharacter>(GetOwningPlayerPawn());
}

ABasePlayerController* UPlayerHudWidget::GetBasePLayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}

UHealthComponent* UPlayerHudWidget::GetHealthComponent() const
{
    const auto pCharacter = GetOwningBaseCharacter();
    return pCharacter ? pCharacter->GetHealthComponent() : nullptr;
}
