// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyPanelWidget.generated.h"


class UStrongAttackAbility;
class UAbilityComponent;
class AGun;
class APlayerCharacter;
class UPlayerWeaponComponent;
class UTextBlock;
class UHealthWidget;
class UHealthComponent;
class UBulletPanelWidget;
class UProgressBar;

UCLASS()
class MAINPROJECT_API UPropertyPanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pAbilityBar;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* pHealthText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* pBulletsText;

    virtual void NativeOnInitialized() override;

private:
    void BindEvents();

protected:
    UFUNCTION()
    void OnHealthChanged(float DeltaHealth);
    void OnAbilityChargeChanged(float ChargeAmount);
    
    void SetCurrentHealthText(bool isInitial = false);
    void SetCurrentAbilityCharge();

    void OnRangeAmmoChanged(int32 RemainingBullets);
    
protected:
    APlayerCharacter* GetOwningPlayerCharacter() const;
    UHealthComponent* GetHealthComponent() const;
    UPlayerWeaponComponent* GetWeaponComponent() const;
    UAbilityComponent* GetAbilityComponent() const;
    
    AGun* GetRangeWeapon() const;
    UStrongAttackAbility* GetStrongAttackAbility() const;
};
