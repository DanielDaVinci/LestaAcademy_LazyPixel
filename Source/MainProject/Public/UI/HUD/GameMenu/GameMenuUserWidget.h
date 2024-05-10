// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameMenuUserWidget.generated.h"


class ABasePlayerController;
class UButton;
class USettingsWidget;

UCLASS()
class MAINPROJECT_API UGameMenuUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    USettingsWidget* pSettingsUserWidget;

    UPROPERTY(meta = (BindWidget))
    UButton* pContinueButton;

    UPROPERTY(meta = (BindWidget))
    UButton* pSettingsButton;

    UPROPERTY(meta = (BindWidget))
    UButton* pExitButton;

    virtual void NativeOnInitialized() override;

    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void OnExitMenu();
    
protected:
    void BindActions();

private:
    inline static const FString MenuLevelName = "/Game/Levels/MenuLevel";
    
    UFUNCTION()
    void OnContinueButtonClicked();

    UFUNCTION()
    void OnSettingsButtonClicked();

    UFUNCTION()
    void OnExitButtonClicked();

    void OnPlayerEscapeClicked();
    virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
    void OpenMenu();
    void CloseMenu();

    void BindControllerInput();
    void UnbindControllerInput();

    ABasePlayerController* GetBasePlayerController() const;
};
