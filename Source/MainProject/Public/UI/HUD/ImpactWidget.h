// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Character/Player/Components/HealthComponent.h"
#include "ImpactWidget.generated.h"

class APlayerCharacter;
/**
 * 
 */
UCLASS()
class MAINPROJECT_API UImpactWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* HurtAnimation;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* HealAnimation;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* CriticalAnimation;

    virtual void NativeOnInitialized() override;

private:
    void BindEvents();

    UFUNCTION()
    void OnHealthChanged(float DeltaHealth);
    
    void OnTakeDamage();
    void OnHeal();
    
protected:
    APlayerCharacter* GetPlayerCharacter() const;
    UHealthComponent* GetHealthComponent() const;
    
};
