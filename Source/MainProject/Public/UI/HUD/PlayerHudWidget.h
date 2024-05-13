// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Character/Player/Components/HealthComponent.h"
#include "PlayerHudWidget.generated.h"

class ABasePlayerController;
class UDialogueSystemUserWidget;
class UGameStartUserWidget;
class ULoadUserWidget;
class UGameMenuUserWidget;
class UPropertyPanelWidget;
class ULosePanelWidget;
class UImpactWidget;
class ABaseCharacter;

UCLASS()
class MAINPROJECT_API UPlayerHudWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UGameStartUserWidget* pGameStartUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    ULoadUserWidget* pLoadUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    ULosePanelWidget* pLosePanel;

    UPROPERTY(meta = (BindWidget))
    UGameMenuUserWidget* pGameMenuUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UImpactWidget* pImpactWidget;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();

protected:
    ABaseCharacter* GetOwningBaseCharacter() const;
    ABasePlayerController* GetBasePLayerController() const;
    UHealthComponent* GetHealthComponent() const;
    
};
