// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.generated.h"

class UButton;
UCLASS()
class MAINPROJECT_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> AboutUsWidgetClass;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> SettingsWidgetClass;
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> ExitWidgetClass;
    
    UPROPERTY(meta = (BindWidget))
    UButton* StartGameButton;
    UPROPERTY(meta = (BindWidget))
    UButton* AboutUs;
    UPROPERTY(meta = (BindWidget))
    UButton* Settings;
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;
    
    virtual void NativeOnInitialized() override;

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
