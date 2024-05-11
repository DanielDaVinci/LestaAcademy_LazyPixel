// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/Dialogue/DialogUserWidget.h"

#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"

void UDialogUserWidget::SetDialog(const FDialogParameters& DialogParameters) const
{
    DialogueText->SetText(DialogParameters.Text);
    
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
