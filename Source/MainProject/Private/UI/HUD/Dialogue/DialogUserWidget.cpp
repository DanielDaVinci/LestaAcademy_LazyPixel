// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/Dialogue/DialogUserWidget.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"

void UDialogUserWidget::SetDialog(const FDialogParameters& DialogParameters)
{
    if (DialogParameters.bLeftDisplay)
    {
        SetZOrder(RightDialoguePanel, 0);
        SetZOrder(LeftDialoguePanel, 1);
        RightDialoguePanel->SetRenderOpacity(0.5f);
        DisplayLeftPanel(DialogParameters.LeftPersonParameters);
    }
    else
    {
        SetZOrder(RightDialoguePanel, 1);
        SetZOrder(LeftDialoguePanel, 0);
        LeftDialoguePanel->SetRenderOpacity(0.5f);
        DisplayRightPanel(DialogParameters.RightPersonParameters);
    }

    StartAnimation(DialogParameters.Text, DialogParameters.AnimationDuration);
}

void UDialogUserWidget::Clear() const
{
    LeftDialoguePanel->SetVisibility(ESlateVisibility::Hidden);
    LeftPersonImage->SetBrushFromTexture(nullptr);
    LeftPersonNameText->SetText({});

    RightDialoguePanel->SetVisibility(ESlateVisibility::Hidden);
    RightPersonImage->SetBrushFromTexture(nullptr);
    RightPersonNameText->SetText({});
}

void UDialogUserWidget::DisplayLeftPanel(const FPersonParameter& PersonParameter) const
{
    LeftDialoguePanel->SetVisibility(ESlateVisibility::Visible);
    LeftDialoguePanel->SetRenderOpacity(1.0f);
    
    LeftPersonNameText->SetText(PersonParameter.Name);
    LeftPersonImage->SetBrushFromTexture(PersonParameter.Image);
    LeftPersonImage->SetBrushSize(PersonParameter.Image->GetImportedSize());
}

void UDialogUserWidget::DisplayRightPanel(const FPersonParameter& PersonParameter) const
{
    RightDialoguePanel->SetVisibility(ESlateVisibility::Visible);
    RightDialoguePanel->SetRenderOpacity(1.0f);
    
    RightPersonNameText->SetText(PersonParameter.Name);
    RightPersonImage->SetBrushFromTexture(PersonParameter.Image);
    RightPersonImage->SetBrushSize(PersonParameter.Image->GetImportedSize());
}

void UDialogUserWidget::SetZOrder(const UWidget* Widget, int32 ZOrder)
{
    if (const auto CanvasPanelSlot = Cast<UCanvasPanelSlot>(Widget->Slot))
    {
        CanvasPanelSlot->SetZOrder(ZOrder);
    }
}

void UDialogUserWidget::StartAnimation(const FText& Text, float Duration)
{
    DialogString = ConvertHotCommands(Text.ToString());
    AnimationDuration = Duration;
    AnimationTimeRate = AnimationDuration / DialogString.Len();

    if (!GetWorld())
        return;

    DialogueText->SetText({});
    CurrentAnimationTime = 0.0f;
    bInAnimation = true;
}

void UDialogUserWidget::UpdateAnimation(float DeltaTime)
{
    CurrentAnimationTime += DeltaTime;
    const int32 Count = CurrentAnimationTime / AnimationTimeRate;

    if (CurrentAnimationTime >= AnimationDuration)
    {
        GetWorld()->GetTimerManager().ClearTimer(AnimationTimerHandle);
        EndAnimation();
        return;
    }

    // const FString CurrentText = DialogString.Left(Count - 1) 
    //     + TEXT("<glitch>") + DialogString.Mid(Count, 7) + TEXT("</>");
    const FString CurrentText = DialogString.Left(Count - 1) + GetGlitch(Count, 7);
    DialogueText->SetText(FText::FromString(CurrentText));
}

void UDialogUserWidget::EndAnimation()
{
    bInAnimation = false;
    DialogueText->SetText(FText::FromString(DialogString));
    OnAnimationEnd.ExecuteIfBound();
}

void UDialogUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (bInAnimation)
    {
        UpdateAnimation(InDeltaTime);
    }
}

FString UDialogUserWidget::ConvertHotCommands(const FString& Value)
{
    const FString lineBreakCodeFrom = TEXT("{lb}");
    const FString lineBreakCodeTo = TEXT("\n");
    const FString Result = Value.Replace(*lineBreakCodeFrom, *lineBreakCodeTo);

    return Result;
}

FString UDialogUserWidget::GetGlitch(int32 Start, int32 Count)
{
    const FString SubString = DialogString.Mid(Start, Count);
    const int32 lgIndex = SubString.Find("\n");
    if (lgIndex == INDEX_NONE)
        return TEXT("<glitch>") + SubString + TEXT("</>");

    return TEXT("<glitch>") + SubString.Mid(0, lgIndex) + TEXT("</>")
        + "\n"
        + TEXT("<glitch>") + SubString.Mid(lgIndex + 1, Count - lgIndex - 1) + TEXT("</>");
}
