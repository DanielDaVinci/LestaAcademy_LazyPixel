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

    SetCurrentHealth();
}

void UHealthWidget::BindEvents()
{
    if (const auto pHealthComponent = GetHealthComponent())
    {
        pHealthComponent->OnHealthChanged.AddUObject(this, &UHealthWidget::OnHealthChanged);
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

    const int32 fullCellsCount = int32(Health / OneCellHealth);
    for (SIZE_T i = 0; i < fullCellsCount; i++)
    {
        if (m_healthCells.IsValidIndex(i))
            m_healthCells[i]->SetHealthPercent(1.0f);
    }

    if (m_healthCells.IsValidIndex(fullCellsCount))
    {
        m_healthCells[fullCellsCount]->SetHealthPercent(Health / OneCellHealth - fullCellsCount);
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
