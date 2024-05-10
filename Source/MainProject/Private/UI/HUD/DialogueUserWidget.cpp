// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/DialogueUserWidget.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Character/Player/BasePlayerController.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/RichTextBlock.h"
#include "Components/TextBlock.h"
#include "UI/HUD/Dialogue/DialogueData.h"

void UDialogueUserWidget::SetDialogueData(const UDataTable* DialogueDataTable, bool bWithGamePaused)
{
    if (!DialogueDataTable)
        return;

    DialogueDataTable->GetAllRows("Context", DialogueTableRows);
    if (DialogueTableRows.Num() == 0)
        return;
    
    StartView();
    BindInteract();
}

void UDialogueUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    m_dialogueUserWidgetSingleInstance = this;
}

void UDialogueUserWidget::StartView()
{
    ClearMonolog();
    ClearDialog();
    SetVisibility(ESlateVisibility::Visible);
    
    CurrentRowIndex = 0;
    SetDialogueRow(DialogueTableRows[CurrentRowIndex]);
}

bool UDialogueUserWidget::NextDialogue()
{
    CurrentRowIndex++;
    if (DialogueTableRows.IsValidIndex(CurrentRowIndex))
    {
        SetDialogueRow(DialogueTableRows[CurrentRowIndex]);
    }

    return DialogueTableRows.IsValidIndex(CurrentRowIndex);
}

void UDialogueUserWidget::EndView()
{
    UnbindInteract();
    SetVisibility(ESlateVisibility::Hidden);
}

void UDialogueUserWidget::BindInteract()
{
    const auto pBasePlayerController = GetBasePlayerController();
    if (!pBasePlayerController)
        return;
    
    pBasePlayerController->SetUIModeControl();
    SetIsFocusable(true);
    SetFocus();
}

void UDialogueUserWidget::UnbindInteract()
{
    const auto pBasePlayerController = GetBasePlayerController();
    if (!pBasePlayerController)
        return;
    
    pBasePlayerController->SetGameModeControl();
    SetIsFocusable(false);
}

FReply UDialogueUserWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
    if (InKeyEvent.GetKey() == EKeys::E)
    {
        OnInteract();
    }
    
    return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

void UDialogueUserWidget::OnInteract()
{
    if (not NextDialogue())
    {
        EndView();
    }
}

void UDialogueUserWidget::SetDialogueRow(const FDialogueTableRow* DialogueRow)
{
    if (!DialogueRow)
        return;

    MonologPanel->SetVisibility(ESlateVisibility::Hidden);
    DialogPanel->SetVisibility(ESlateVisibility::Hidden);

    switch (DialogueRow->View)
    {
        case EDialogueView::Monolog:
            SetMonolog(DialogueRow->MonologParameters);
            break;
        case EDialogueView::Dialog:
            SetDialog(DialogueRow->DialogParameters);
            break;
    }

    DialogueText->SetText(DialogueRow->Text);
}

void UDialogueUserWidget::SetMonolog(const FMonologParameters& MonologParameters)
{
    MonologPanel->SetVisibility(ESlateVisibility::Visible);
    MonologImage->SetBrushFromTexture(MonologParameters.Image);
}

void UDialogueUserWidget::SetDialog(const FDialogParameters& DialogParameters)
{
    DialogPanel->SetVisibility(ESlateVisibility::Visible);
    
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

void UDialogueUserWidget::DisplayLeftPanel(const FPersonParameter& PersonParameter) const
{
    LeftDialoguePanel->SetVisibility(ESlateVisibility::Visible);
    LeftDialoguePanel->SetRenderOpacity(1.0f);
    
    LeftPersonNameText->SetText(PersonParameter.Name);
    LeftPersonImage->SetBrushFromTexture(PersonParameter.Image);
}

void UDialogueUserWidget::DisplayRightPanel(const FPersonParameter& PersonParameter) const
{
    RightDialoguePanel->SetVisibility(ESlateVisibility::Visible);
    RightDialoguePanel->SetRenderOpacity(1.0f);
    
    RightPersonNameText->SetText(PersonParameter.Name);
    RightPersonImage->SetBrushFromTexture(PersonParameter.Image);
}

void UDialogueUserWidget::ClearMonolog() const
{
    MonologPanel->SetVisibility(ESlateVisibility::Hidden);
    MonologImage->SetBrushFromTexture(nullptr);
}

void UDialogueUserWidget::ClearDialog() const
{
    DialogPanel->SetVisibility(ESlateVisibility::Hidden);
    
    LeftDialoguePanel->SetVisibility(ESlateVisibility::Hidden);
    LeftPersonImage->SetBrushFromTexture(nullptr);
    LeftPersonNameText->SetText({});

    RightDialoguePanel->SetVisibility(ESlateVisibility::Hidden);
    RightPersonImage->SetBrushFromTexture(nullptr);
    RightPersonNameText->SetText({});
}

void UDialogueUserWidget::SetZOrder(const UWidget* Widget, int32 ZOrder)
{
    if (auto* CanvasPanelSlot = Cast<UCanvasPanelSlot>(Widget->Slot))
    {
        CanvasPanelSlot->SetZOrder(ZOrder);
    }
}

ABasePlayerController* UDialogueUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
