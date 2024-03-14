// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyPanelWidget.generated.h"


class UImage;
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
    UImage* pPlayerImage;
    
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pHealthBar;

    UPROPERTY(meta = (BindWidget))
    UProgressBar* pAbilityBar;

    virtual void NativeOnInitialized() override;

private:
    void BindEvents();

protected:
    void OnHealthChanged(float DeltaHealth);
    
protected:
    ABaseCharacter* GetOwningBaseCharacter() const;
    UHealthComponent* GetHealthComponent() const;
};
