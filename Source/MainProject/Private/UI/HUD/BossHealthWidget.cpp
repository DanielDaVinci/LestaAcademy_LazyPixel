// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/BossHealthWidget.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "UI/HUD/HealthCellWidget.h"

void UBossHealthWidget::RebindEvents(ABaseCharacter* Character) 
{
    pOwnerCharacter = Character;
    BindEvents();
}

void UBossHealthWidget::SetCurrentHealth() 
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;

    float Health = pHealthComponent->GetHealth();
    float MaxHealth = pHealthComponent->GetMaxHealth();
    if (pHealthComponent->GetPercentHealth() > 0.5f)
        Health -= MaxHealth * 0.5f;

    MaxHealth /= 2.f;

    SetHealth(Health, MaxHealth / cellsCount);
}

void UBossHealthWidget::SetHealth(float Health, float OneCellHealth)
{
    if (!pHealthBox)
        return;

    for (SIZE_T i = 0; i < m_healthCells.Num(); i++)
    {
        m_healthCells[i]->SetHealthPercent(FMath::Clamp(Health / OneCellHealth - (m_healthCells.Num() - i - 1), 0.0f, 1.0f));
    }
}

UHealthComponent* UBossHealthWidget::GetHealthComponent() const
{
    return pOwnerCharacter ? pOwnerCharacter->GetHealthComponent() : nullptr;
}
