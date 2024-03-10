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
    pHealthComponent->OnDied.AddUObject(this, &UPlayerHudWidget::OnPlayerDied);
}

void UPlayerHudWidget::OnHealthChanged(float DeltaHealth)
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    if (!IsAnimationPlaying(pDamageIndicatorAnimation) && DeltaHealth < 0.0f)
    {
        PlayAnimation(pDamageIndicatorAnimation);
    }
}

void UPlayerHudWidget::OnPlayerDied()
{
    FTimerHandle deathTimer;
    GetWorld()->GetTimerManager().SetTimer(
        deathTimer, [this]() { pLosePanel->SetVisibility(ESlateVisibility::Visible); }, losePanelDelay, false);
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

bool UPlayerHudWidget::IsPlayerDead() const
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return true;
    
    return pHealthComponent->IsDead();
}
