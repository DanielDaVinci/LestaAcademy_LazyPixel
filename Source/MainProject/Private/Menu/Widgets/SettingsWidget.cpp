// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/SettingsWidget.h"

#include "MainProjectGameInstance.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Data/SettingSaveGame.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/Slider.h"
#include "GameFramework/PlayerInput.h"

void USettingsWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
    ApplySavedData();
}

void USettingsWidget::BeginDestroy()
{
    Super::BeginDestroy();
}

void USettingsWidget::EndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason)
{
    SaveData();
}

void USettingsWidget::BindActions()
{
    if (const auto playerCharacter = GetOwningPlayerPawn())
    {
        playerCharacter->OnEndPlay.AddDynamic(this, &USettingsWidget::EndPlay);
    }
    
    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &USettingsWidget::OnExit);
    }

    if (MusicSlider)
    {
        MusicSlider->OnValueChanged.AddDynamic(this, &USettingsWidget::OnMusicValueChanged);
    }

    if (SoundSlider)
    {
        SoundSlider->OnValueChanged.AddDynamic(this, &USettingsWidget::OnSoundValueChanged);
    }

    if (MouseSensitivitySlider)
    {
        MouseSensitivitySlider->OnValueChanged.AddDynamic(this, &USettingsWidget::OnMouseSensitivityValueChanged);
    }
}

void USettingsWidget::OnMouseSensitivityValueChanged(float Value)
{
    const auto playerController = GetBasePlayerController();
    if (!playerController)
        return;

    playerController->SetMouseSensitivity(Value);
}

void USettingsWidget::OnExit()
{
    SetVisibility(ESlateVisibility::Hidden);
}

void USettingsWidget::ApplySavedData() const
{
    const auto settingSaveGame = GetSettingSaveGame();
    if (!settingSaveGame)
        return;
    
    MusicSlider->SetValue(settingSaveGame->SettingData.MusicValue);
    SoundSlider->SetValue(settingSaveGame->SettingData.SoundValue);
    MouseSensitivitySlider->SetValue(settingSaveGame->SettingData.MouseSensitivity);
}

void USettingsWidget::SaveData() const
{
    const auto settingSaveGame = GetSettingSaveGame();
    if (!settingSaveGame)
        return;
    
    settingSaveGame->SettingData.MusicValue = MusicSlider->GetValue();
    settingSaveGame->SettingData.SoundValue = SoundSlider->GetValue();
    settingSaveGame->SettingData.MouseSensitivity = MouseSensitivitySlider->GetValue();
    
    const auto gameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!gameInstance)
        return;
    
    gameInstance->SaveSlot(SettingSlotName, settingSaveGame);
}

USettingSaveGame* USettingsWidget::GetSettingSaveGame() const
{
    const auto gameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!gameInstance)
        return nullptr;
    
    if (gameInstance->IsExistsSlot(SettingSlotName))
    {
        return gameInstance->LoadSlot<USettingSaveGame>(SettingSlotName);
    }
    
    return gameInstance->CreateSlot<USettingSaveGame>(SettingSlotName);
}

ABasePlayerController* USettingsWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
