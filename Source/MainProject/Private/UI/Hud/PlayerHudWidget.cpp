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
    
    m_playerHealthComponent->OnHealthChanged.AddUObject(this, &UPlayerHudWidget::UpdateHealthBar);
}

void UPlayerHudWidget::UpdateHealthBar(float health)
{
    pHealthBar->SetPercent(health / m_playerHealthComponent->GetMaxHealth());
}
