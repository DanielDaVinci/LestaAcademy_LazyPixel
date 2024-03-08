// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyPanelWidget.generated.h"


class UHealthComponent;
class ABaseCharacter;
class UBulletPanelWidget;
class UProgressBar;

UCLASS()
class MAINPROJECT_API UPropertyPanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pHealthBar;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* pAbilityBar;

    UPROPERTY(meta = (BindWidget))
    UBulletPanelWidget* pBulletPanel;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();

protected:
    void OnHealthChanged(float DeltaHealth);
    
protected:
    ABaseCharacter* GetOwningBaseCharacter() const;
    UHealthComponent* GetHealthComponent() const;
};
