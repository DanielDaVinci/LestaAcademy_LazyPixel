// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LosePanelWidget.generated.h"

class UButton;

UCLASS()
class MAINPROJECT_API ULosePanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* pRestartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* pMenuButton;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();

protected:
    UFUNCTION()
    void OnRestartButtonClicked();

    UFUNCTION()
    void OnMenuButtonClicked();
};
