// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/Dialogue/MonologUserWidget.h"

#include "Animation/WidgetAnimation.h"
#include "Character/Player/BasePlayerController.h"
#include "Components/Image.h"
#include "UI/HUD/Dialogue/DialogueData.h"

void UMonologUserWidget::SetMonolog(const FMonologParameters& MonologParameters)
{
    SetMonologParameters(MonologParameters);
    
    if (MonologParameters.bWithAnimation)
    {
        StartSwitchAnimation();
    }
    else
    {
        OnFinishedSwitchAnimation();
    }
}

void UMonologUserWidget::Clear() const
{
    CurrentMonologImage->SetBrushFromTexture(nullptr);
    CurrentMonologImage->SetOpacity(0.0f);
    
    NextMonologImage->SetBrushFromTexture(nullptr);
    NextMonologImage->SetOpacity(0.0f);
}

void UMonologUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UMonologUserWidget::BindEvents()
{
    if (SwitchAnimation)
    {
        FWidgetAnimationDynamicEvent AnimationWidgetEvent;
        AnimationWidgetEvent.BindDynamic(this, &UMonologUserWidget::OnFinishedSwitchAnimation);
        BindToAnimationFinished(SwitchAnimation, AnimationWidgetEvent);
    }
}

void UMonologUserWidget::SetMonologParameters(const FMonologParameters& MonologParameters) const
{
    NextMonologImage->SetBrushFromTexture(MonologParameters.Image);
    NextMonologImage->SetOpacity(1.0f);
}

void UMonologUserWidget::StartSwitchAnimation()
{
    PlayAnimation(SwitchAnimation);
}

void UMonologUserWidget::OnFinishedSwitchAnimation()
{
    CurrentMonologImage->SetBrush(NextMonologImage->GetBrush());
    CurrentMonologImage->SetOpacity(1.0f);
    CurrentMonologImage->SetRenderOpacity(1.0f);
    
    NextMonologImage->SetBrushFromTexture(nullptr);
    NextMonologImage->SetRenderOpacity(0.0f);

    OnAnimationEnd.ExecuteIfBound();
}

ABasePlayerController* UMonologUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
