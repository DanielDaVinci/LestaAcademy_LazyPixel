// Lazy Pixel. All Rights Reserved.


#include "UI/Hud/PlayerHudWidget.h"

void UPlayerHudWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    m_playerHealthComponent = GetOwningPlayerPawn()->GetComponentByClass<UHealthComponent>();
}

void UPlayerHudWidget::NativeConstruct()
{
    Super::NativeConstruct();
    
    m_playerHealthComponent->OnHealthChanged.AddUObject(this, &UPlayerHudWidget::TakeDamage);
}

void UPlayerHudWidget::TakeDamage(float damage)
{
    pHealthBar->SetPercent(damage / m_playerHealthComponent->GetMaxHealth());

    if (!IsAnimationPlaying(pDamageIndicatorAnimation) && damage != m_playerHealthComponent->GetMaxHealth())
    {
        PlayAnimation(pDamageIndicatorAnimation);
    }
}
