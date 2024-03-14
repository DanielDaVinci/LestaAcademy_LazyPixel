// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyPanelWidget.generated.h"


class AGun;
class APlayerCharacter;
class UWeaponComponent;
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
    void OnHealthChanged(float DeltaHealth);
    void SetCurrentHealthText();

    void OnRangeAmmoChanged(int32 RemainingBullets);
    
protected:
    APlayerCharacter* GetOwningPlayerCharacter() const;
    UHealthComponent* GetHealthComponent() const;
    UWeaponComponent* GetWeaponComponent() const;
    AGun* GetRangeWeapon() const; 
};
