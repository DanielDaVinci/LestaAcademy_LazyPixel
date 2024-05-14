// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsWidget.generated.h"

class ABasePlayerController;
class APlayerCharacter;
class USettingSaveGame;
class USlider;
class UButton;
class UImage;

UCLASS()
class MAINPROJECT_API USettingsWidget : public UUserWidget
{
	GENERATED_BODY()
    
protected:
    UPROPERTY(meta = (BindWidget))
    USlider* MusicSlider;

    UPROPERTY(meta = (BindWidget))
    USlider* SoundSlider;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;

    virtual void NativeOnInitialized() override;
    virtual void BeginDestroy() override;

    UFUNCTION()
    void EndPlay(AActor* Actor , EEndPlayReason::Type EndPlayReason);

protected:
    void BindActions();

    UFUNCTION(BlueprintImplementableEvent)
    void OnMusicValueChanged(float Value);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSoundValueChanged(float Value);
    
    UFUNCTION()
    void OnExit();
    
    void ApplySavedData() const;
    void SaveData() const;

private:
    const FString SettingSlotName = "SettingSlot";

private:
    USettingSaveGame* GetSettingSaveGame() const;
    ABasePlayerController* GetBasePlayerController() const;
};
