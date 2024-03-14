// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/PlayerHudWidget.h"

#include "Character/BaseCharacter.h"
#include "UI/HUD/LosePanelWidget.h"

void UPlayerHudWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UPlayerHudWidget::BindActions()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    pHealthComponent->OnHealthChanged.AddUObject(this, &UPlayerHudWidget::OnHealthChanged);
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

UHealthComponent* UPlayerHudWidget::GetHealthComponent() const
{
    const auto pCharacter = GetOwningBaseCharacter();
    return pCharacter ? pCharacter->GetHealthComponent() : nullptr;
}
