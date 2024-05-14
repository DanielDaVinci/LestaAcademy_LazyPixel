// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinPanelWidget.generated.h"

class ABasePlayerController;
class ABaseCharacter;
class UButton;

UCLASS()
class MAINPROJECT_API UWinPanelWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
    UPROPERTY(meta = (BindWidget))
    UButton* pMenuButton;

    virtual void NativeOnInitialized() override;

protected:
    UFUNCTION()
    void OnMenuButtonClicked();

protected:
    ABasePlayerController* GetBasePlayerController() const;
};
