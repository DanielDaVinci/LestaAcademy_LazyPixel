// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Components/ProgressBar.h"
#include "PlayerHudWidget.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API UPlayerHudWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pHealthBar;
    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* pDamageIndicatorAnimation;
    
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    void TakeDamage(float damage);

    UFUNCTION(BlueprintCallable, Category = "UI")
    bool IsPlayerDead() const;

private:
    UHealthComponent* m_playerHealthComponent;
};
