// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/HealthWidget.h"

#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Spacer.h"
#include "UI/HUD/HealthCellWidget.h"
#include "UI/HUD/SpacerWidget.h"

void UHealthWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    InitializeBars();
    BindEvents();
}

void UHealthWidget::InitializeBars()
{
    if (!pHealthBox || !healthBarClass || !spacerClass)
        return;
    
    for (SIZE_T i = 0; i < cellsCount; i++)
    {
        const auto cellBar = CreateWidget<UHealthCellWidget>(GetWorld(), healthBarClass);
        if (!cellBar)
            continue;
        
        m_healthCells.Add(cellBar);
        pHealthBox->AddChild(cellBar);
        cellBar->SetSlateChildSize(1.0f, ESlateSizeRule::Fill);

        const auto spacer = CreateWidget<USpacerWidget>(GetWorld(), spacerClass);
        if (!spacer)
            continue;
        
        pHealthBox->AddChild(spacer);
        spacer->SetSlateChildSize(0.1f, ESlateSizeRule::Fill);
    }
}

void UHealthWidget::BindEvents()
{
    if (const auto pHealthComponent = GetHealthComponent())
    {
        pHealthComponent->OnHealthChanged.AddDynamic(this, &UHealthWidget::OnHealthChanged);
        SetCurrentHealth();
    }
}

void UHealthWidget::OnHealthChanged(float DeltaHealth)
{
    SetCurrentHealth();
}

void UHealthWidget::SetCurrentHealth()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;

    SetHealth(pHealthComponent->GetHealth(), pHealthComponent->GetMaxHealth() / cellsCount);
}

void UHealthWidget::SetHealth(float Health, float OneCellHealth)
{
    if (!pHealthBox)
        return;

    for (SIZE_T i = 0; i < m_healthCells.Num(); i++)
    {
        m_healthCells[i]->SetHealthPercent(FMath::Clamp(
            Health / OneCellHealth - i,
            0.0f, 1.0f));
    }
}

APlayerCharacter* UHealthWidget::GetPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

UHealthComponent* UHealthWidget::GetHealthComponent() const
{
    const auto pPlayerCharacter = GetPlayerCharacter();
    return pPlayerCharacter ? pPlayerCharacter->GetHealthComponent() : nullptr;
}
