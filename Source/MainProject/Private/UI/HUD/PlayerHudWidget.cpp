// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/PlayerHudWidget.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/BasePlayerController.h"
#include "UI/HUD/DialogueUserWidget.h"

void UPlayerHudWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
    if (const auto asd = GetBasePLayerController())
    {
        // asd->SetShowMouseCursor(false);
        asd->SetUIModeControl();
        asd->SetGameModeControl();
        // asd->SetShowMouseCursor(true);
        UWidgetBlueprintLibrary::SetFocusToGameViewport();
    }
}

void UPlayerHudWidget::BindActions()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    pHealthComponent->OnHealthChanged.AddDynamic(this, &UPlayerHudWidget::OnHealthChanged);
}

void UPlayerHudWidget::OnHealthChanged(float DeltaHealth)
{
    if (!IsAnimationPlaying(pDamageIndicatorAnimation) && DeltaHealth < 0.0f)
    {
        PlayAnimation(pDamageIndicatorAnimation);
    }
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
