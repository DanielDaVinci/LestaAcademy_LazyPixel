// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.generated.h"

class UChoiceSaveSlotUserWidget;
class UExitWidget;
class USettingsWidget;
class UAboutUsWidget;
class UButton;
UCLASS()
class MAINPROJECT_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UChoiceSaveSlotUserWidget* ChoiceSaveSlotUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UAboutUsWidget* AboutUsUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    USettingsWidget* SettingsUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UExitWidget* ExitUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UButton* StartGameButton;
    
    UPROPERTY(meta = (BindWidget))
    UButton* AboutUs;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Settings;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;
    
    virtual void NativeOnInitialized() override;

protected:
    void BindActions();

private:
    UFUNCTION()
    void OnStartGame();
    
    UFUNCTION()
    void OnAboutUs();
    
    UFUNCTION()
    void OnSettings();
    
    UFUNCTION()
    void OnExit();
};
