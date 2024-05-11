// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/GameStartUserWidget.h"

#include "Character/Player/BasePlayerController.h"
#include "Components/BackgroundBlur.h"

void UGameStartUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UGameStartUserWidget::BindEvents()
{
    const auto owningPawn = GetOwningPlayerPawn();
    if (!owningPawn)
        return;

    owningPawn->OnPawnBeginPlay.AddWeakLambda(this, [this](APawn* Pawn)
    {
        StartStartingAnimation();
    });
}

void UGameStartUserWidget::StartStartingAnimation()
{
    if (!GetWorld())
        return;
    
    GetWorld()->GetTimerManager().SetTimer(m_startingAnimationTimerHandle, this, &UGameStartUserWidget::UpdateStartingAnimation,
        startingTimeRate, true, 0.0f);
}

void UGameStartUserWidget::UpdateStartingAnimation()
{
    m_currentStartingAnimationTime += startingTimeRate;
    const float progressPercent = m_currentStartingAnimationTime / startingDuration;

    StartBackgroundBlur->SetBlurStrength(100.0f * (1 - progressPercent));
    StartBackgroundBlur->SetBlurRadius(255.0f * progressPercent);

    if (m_currentStartingAnimationTime >= startingDuration)
    {
        EndStartingAnimation();
    }
}

void UGameStartUserWidget::EndStartingAnimation()
{
    if (!GetWorld())
        return;

    GetWorld()->GetTimerManager().ClearTimer(m_startingAnimationTimerHandle);
    SetVisibility(ESlateVisibility::Hidden);
}

ABasePlayerController* UGameStartUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
