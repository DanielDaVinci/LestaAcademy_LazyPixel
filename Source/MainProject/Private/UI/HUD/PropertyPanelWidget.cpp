// Lazy Pixel. All Rights Reserved.


#include "..\..\..\Public\UI\HUD\PropertyPanelWidget.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/ProgressBar.h"

void UPropertyPanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void UPropertyPanelWidget::BindActions()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;

    pHealthComponent->OnHealthChanged.AddUObject(this, &UPropertyPanelWidget::OnHealthChanged);
}

void UPropertyPanelWidget::OnHealthChanged(float DeltaHealth)
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    pHealthBar->SetPercent(pHealthComponent->GetPercentHealth());
}

ABaseCharacter* UPropertyPanelWidget::GetOwningBaseCharacter() const
{
    return Cast<ABaseCharacter>(GetOwningPlayerPawn());
}

UHealthComponent* UPropertyPanelWidget::GetHealthComponent() const
{
    const auto pCharacter = GetOwningBaseCharacter();
    return pCharacter ? pCharacter->GetHealthComponent() : nullptr;
}
