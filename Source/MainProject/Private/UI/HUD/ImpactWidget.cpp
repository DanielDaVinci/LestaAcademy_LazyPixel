// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/ImpactWidget.h"

#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"

void UImpactWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UImpactWidget::OnTakeDamage()
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    if (pHealthComponent->GetPercentHealth() <= 0.0f && IsAnimationPlaying(CriticalAnimation))
    {
        StopAnimation(CriticalAnimation);
        return;
    }

    if (pHealthComponent->GetPercentHealth() <= 0.3f && !IsAnimationPlaying(CriticalAnimation))
    {
        PlayAnimation(CriticalAnimation, 0, 999);
        return;
    }

    if (!IsAnimationPlaying(HurtAnimation))
        PlayAnimation(HurtAnimation);
}

void UImpactWidget::OnHeal()
{
    if (!IsAnimationPlaying(HealAnimation))
    {
        StopAnimation(CriticalAnimation);
        PlayAnimation(HealAnimation);
    }
}

void UImpactWidget::BindEvents()
{
    if (const auto pHealthComponent = GetHealthComponent())
    {
        pHealthComponent->OnHealthChanged.AddUObject(this, &UImpactWidget::OnHealthChanged);
    }
}

void UImpactWidget::OnHealthChanged(float DeltaHealth)
{
    if (DeltaHealth >= 0.0f)
    {
        OnHeal();
    }
    else
    {
        OnTakeDamage();
    }
}

APlayerCharacter* UImpactWidget::GetPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

UHealthComponent* UImpactWidget::GetHealthComponent() const
{
    const auto playerCharacter = GetPlayerCharacter();
    return playerCharacter ? playerCharacter->GetHealthComponent() : nullptr;
}
