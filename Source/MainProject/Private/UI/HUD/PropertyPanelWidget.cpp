// Lazy Pixel. All Rights Reserved.


#include "..\..\..\Public\UI\HUD\PropertyPanelWidget.h"

#include "Character/BaseCharacter.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/TextBlock.h"

void UPropertyPanelWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UPropertyPanelWidget::BindEvents()
{
    if (const auto pHealthComponent = GetHealthComponent())
    {
        pHealthComponent->OnHealthChanged.AddUObject(this, &UPropertyPanelWidget::OnHealthChanged);
        // SetCurrentHealthText();
    }
}

void UPropertyPanelWidget::OnHealthChanged(float DeltaHealth)
{
    SetCurrentHealthText();
}

void UPropertyPanelWidget::SetCurrentHealthText()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    pHealthText->SetText(FText::FromString(
        FString::Printf(TEXT("%d / %d"),
            int32(pHealthComponent->GetHealth()),
            int32(pHealthComponent->GetMaxHealth()))
   ));
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
