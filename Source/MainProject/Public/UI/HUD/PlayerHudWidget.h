// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/ProgressBar.h"
#include "PlayerHudWidget.generated.h"

class UPropertyPanelWidget;
class ULosePanelWidget;
class ABaseCharacter;

UCLASS()
class MAINPROJECT_API UPlayerHudWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    ULosePanelWidget* pLosePanel;
    
    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* pDamageIndicatorAnimation;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();
    
protected:
    void OnHealthChanged(float DeltaHealth);
    
protected:
    ABaseCharacter* GetOwningBaseCharacter() const;
    UHealthComponent* GetHealthComponent() const;
    
};
