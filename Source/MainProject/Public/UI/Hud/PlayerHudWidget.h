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
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    void UpdateHealthBar(float health);
    
    UPROPERTY(meta = (BindWidget))
    UProgressBar* pHealthBar;

private:
    UHealthComponent* m_playerHealthComponent;
};
