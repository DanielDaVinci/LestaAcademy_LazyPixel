// Lazy Pixel. All Rights Reserved.


#include "..\..\..\Public\UI\HUD\PropertyPanelWidget.h"

#include "Abilities/ActiveAbilities/StrongAttackAbility.h"
#include "Character/BaseCharacter.h"
#include "Character/Player/PlayerCharacter.h"
#include "Character/Player/Components/AbilityComponent.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Character/Player/Components/WeaponComponent.h"
#include "Components/ProgressBar.h"
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
        SetCurrentHealthText(true);
    }

    if (const auto pWeaponComponent = GetWeaponComponent())
    {
        pWeaponComponent->OnAfterSpawnAllWeapons.AddLambda([this]()
        {
            if (const auto pRangeWeapon = GetRangeWeapon())
            {
                pRangeWeapon->OnAmmoChanged.AddUObject(this, &UPropertyPanelWidget::OnRangeAmmoChanged);
        
                pBulletsText->SetText(FText::FromString(
                    FString::Printf(TEXT("%d / %d"),
                        pRangeWeapon->GetMaxBullets(),
                        pRangeWeapon->GetMaxBullets())
               ));
            }
        });
    }

    if (const auto pStrongAttackAbility = GetStrongAttackAbility())
    {
        pStrongAttackAbility->OnAbilityChargeChanged.AddUObject(this, &UPropertyPanelWidget::OnAbilityChargeChanged);
        OnAbilityChargeChanged(pStrongAttackAbility->GetCurrentAbilityCharge());
    }
}

void UPropertyPanelWidget::OnHealthChanged(float DeltaHealth)
{
    SetCurrentHealthText();
}

void UPropertyPanelWidget::OnAbilityChargeChanged(float ChargeAmount)
{
    SetCurrentAbilityCharge();
}

void UPropertyPanelWidget::SetCurrentHealthText(bool isInitial)
{
    const auto pHealthComponent = GetHealthComponent();
    if (!pHealthComponent)
        return;
    
    if (isInitial)
        pHealthText->SetText(FText::FromString(
            FString::Printf(TEXT("%d / %d"), 
                int32(pHealthComponent->GetMaxHealth()), 
                int32(pHealthComponent->GetMaxHealth()))));
    else
        pHealthText->SetText(FText::FromString(
            FString::Printf(TEXT("%d / %d"), 
                int32(pHealthComponent->GetHealth()), 
                int32(pHealthComponent->GetMaxHealth()))
        ));
}

void UPropertyPanelWidget::SetCurrentAbilityCharge()
{
    const auto pStrongAttackAbility = GetStrongAttackAbility();
    if (!pStrongAttackAbility)
        return;

    pAbilityBar->SetPercent(pStrongAttackAbility->GetCurrentAbilityCharge() / pStrongAttackAbility->GetMaxAbilityCharge());
}

void UPropertyPanelWidget::OnRangeAmmoChanged(int32 RemainingBullets)
{
    const auto pRangeWeapon = GetRangeWeapon();
    if (!pRangeWeapon)
        return;

    pBulletsText->SetText(FText::FromString(
        FString::Printf(TEXT("%d / %d"),
            RemainingBullets,
            pRangeWeapon->GetMaxBullets())
   ));
}


APlayerCharacter* UPropertyPanelWidget::GetOwningPlayerCharacter() const
{
    return Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

UHealthComponent* UPropertyPanelWidget::GetHealthComponent() const
{
    const auto pCharacter = GetOwningPlayerCharacter();
    return pCharacter ? pCharacter->GetHealthComponent() : nullptr;
}

UWeaponComponent* UPropertyPanelWidget::GetWeaponComponent() const
{
    const auto pCharacter = GetOwningPlayerCharacter();
    return pCharacter ? Cast<UWeaponComponent>(pCharacter->GetBaseWeaponComponent()) : nullptr;
}

UAbilityComponent* UPropertyPanelWidget::GetAbilityComponent() const
{
    const auto pCharacter = GetOwningPlayerCharacter();
    return pCharacter ? pCharacter->GetAbilityComponent() : nullptr;
}

AGun* UPropertyPanelWidget::GetRangeWeapon() const
{
    const auto pWeaponComponent = GetWeaponComponent();
    return pWeaponComponent ? pWeaponComponent->GetRangeWeapon() : nullptr;
}

UStrongAttackAbility* UPropertyPanelWidget::GetStrongAttackAbility() const
{
    const auto pAbilityComponent = GetAbilityComponent();
    return pAbilityComponent ? Cast<UStrongAttackAbility>(pAbilityComponent->GetCustomAbility()) : nullptr;
}
