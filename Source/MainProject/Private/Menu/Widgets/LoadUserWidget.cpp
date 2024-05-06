// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/LoadUserWidget.h"

#include "MainProjectGameInstance.h"
#include "Components/BackgroundBlur.h"
#include "Components/ProgressBar.h"

void ULoadUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void ULoadUserWidget::BindEvents()
{
    const auto projectGameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!projectGameInstance)
        return;

    projectGameInstance->OnPreAsyncLevelLoad.AddUObject(this, &ULoadUserWidget::OnPreAsyncLevelLoad);
    projectGameInstance->OnSuccessAsyncLevelLoad.AddUObject(this, &ULoadUserWidget::OnSuccessAsyncLoadLevel);
}

void ULoadUserWidget::OnPreAsyncLevelLoad()
{
    const auto projectGameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!projectGameInstance)
        return;

    const auto progressSaveGame = projectGameInstance->GetCurrentSlot<UProgressSaveGame>();
    if (!progressSaveGame)
        return;
    
    SetVisibility(ESlateVisibility::Visible);
    StartProgressLoad();
}

void ULoadUserWidget::OnSuccessAsyncLoadLevel(const FString& LevelName)
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_progressTimerHandle);
    StartFinishAnimation();
}


void ULoadUserWidget::StartProgressLoad()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().SetTimer(m_progressTimerHandle, this, &ULoadUserWidget::UpdateProgressTimer,
        loadingPartTimeRate, true,0.0f);
}

void ULoadUserWidget::UpdateProgressTimer()
{
    m_currentProgressTime += loadingPartTimeRate;

    int32 currentParts = m_currentProgressTime / loadingPartTimeRate;
    currentParts %= loadingParts;
    const float progressPercent = (float)currentParts / loadingParts;
    
    LoadProgressBar->SetPercent(progressPercent);
}

void ULoadUserWidget::StartFinishAnimation()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().SetTimer(m_finishAnimationTimerHandle, this, &ULoadUserWidget::UpdateFinishAnimation,
        finishingAnimationTimeRate, true, 0.0f);
}

void ULoadUserWidget::UpdateFinishAnimation()
{
    m_currentFinishAnimationTime += finishingAnimationTimeRate;
    const float progressPercent = m_currentFinishAnimationTime / finishingAnimationDuration;

    FinishBackgroundBlur->SetBlurRadius(255.0f * (1 - progressPercent));
    FinishBackgroundBlur->SetBlurStrength(100.0f * progressPercent);

    if (m_currentFinishAnimationTime >= finishingAnimationDuration)
    {
        EndFinishAnimation();
    }
}

void ULoadUserWidget::EndFinishAnimation()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_finishAnimationTimerHandle);

    const auto projectGameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!projectGameInstance)
        return;

    const auto progressSaveGame = projectGameInstance->GetCurrentSlot<UProgressSaveGame>();
    if (!progressSaveGame)
        return;

    projectGameInstance->LevelLoad(progressSaveGame->GetLevelName());
}
