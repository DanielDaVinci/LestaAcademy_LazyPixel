// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/ImpactWidget.h"

#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/HealthComponent.h"

void UImpactWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    const auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
    HealthComponent = player->GetHealthComponent();
    HealthComponent->OnTakeDamage.AddUObject(this, &UImpactWidget::OnTakeDamage);
    HealthComponent->OnHeal.AddUObject(this, &UImpactWidget::OnHeal);
}

void UImpactWidget::OnTakeDamage()
{
    if (HealthComponent->GetHealth() <= 0.0f && IsAnimationPlaying(CriticalAnimation))
    {
        StopAnimation(CriticalAnimation);
        return;
    }

    if (HealthComponent->GetPercentHealth() < 0.3f && !IsAnimationPlaying(CriticalAnimation))
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
