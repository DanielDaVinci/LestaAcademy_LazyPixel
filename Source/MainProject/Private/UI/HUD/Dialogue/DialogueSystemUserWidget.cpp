// Lazy Pixel. All Rights Reserved.


#include "UI/HUD/Dialogue/DialogueSystemUserWidget.h"

#include "Character/Player/BasePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "UI/HUD/Dialogue/DialogUserWidget.h"
#include "UI/HUD/Dialogue/MonologUserWidget.h"

void UDialogueSystemUserWidget::SetDialogueData(const UDataTable* DialogueDataTable, bool bStartAnimation, bool bEndAnimation, bool bGamePause)
{
    if (!DialogueDataTable)
        return;

    DialogueTableRows.Reset();
    DialogueDataTable->GetAllRows("", DialogueTableRows);
    if (DialogueTableRows.Num() == 0)
        return;

    bWithStartAnimation = bStartAnimation;
    bWithEndAnimation = bEndAnimation;
    bWithGamePause = bGamePause;
    
    StartView();
    BindInteract();
}

void UDialogueSystemUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    m_dialogueUserWidgetSingleInstance = this;
}

void UDialogueSystemUserWidget::StartView()
{
    OnStartDialogue.Broadcast();
    ClearMonolog();
    ClearDialog();

    bKeyDowned = false;
    CurrentRowIndex = 0;
    SetDialogueRow(DialogueTableRows[CurrentRowIndex]);

    if (bWithGamePause)
    {
        UGameplayStatics::SetGamePaused(GetWorld(), true);
    }
    
    if (bWithStartAnimation)
    {
        PlayAnimation(StartDialogueAnimation);
    }
    
    SetVisibility(ESlateVisibility::Visible);
}

bool UDialogueSystemUserWidget::NextDialogue()
{
    CurrentRowIndex++;
    if (DialogueTableRows.IsValidIndex(CurrentRowIndex))
    {
        SetDialogueRow(DialogueTableRows[CurrentRowIndex]);
    }

    return DialogueTableRows.IsValidIndex(CurrentRowIndex);
}

void UDialogueSystemUserWidget::EndView()
{
    UnbindInteract();
    
    if (bWithEndAnimation)
    {
        PlayAnimation(EndDialogueAnimation);
    }

    if (bWithGamePause)
    {
        UGameplayStatics::SetGamePaused(GetWorld(), false);
    }

    SetVisibility(ESlateVisibility::Hidden);
    OnEndDialogue.Broadcast();
}

void UDialogueSystemUserWidget::BindInteract()
{
    const auto pBasePlayerController = GetBasePlayerController();
    if (!pBasePlayerController)
        return;
    
    pBasePlayerController->SetUIModeControl();
    SetIsFocusable(true);
    SetFocus();
}

void UDialogueSystemUserWidget::UnbindInteract()
{
    const auto pBasePlayerController = GetBasePlayerController();
    if (!pBasePlayerController)
        return;
    
    pBasePlayerController->SetGameModeControl();
    SetIsFocusable(false);
}

FReply UDialogueSystemUserWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
    if (InKeyEvent.GetKey() == EKeys::E)
    {
        bKeyDowned = true;
    }
    
    return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

FReply UDialogueSystemUserWidget::NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
    if (InKeyEvent.GetKey() == EKeys::E && bKeyDowned)
    {
        OnInteract();
    }
    
    return Super::NativeOnKeyUp(InGeometry, InKeyEvent);
}

void UDialogueSystemUserWidget::OnInteract()
{
    if (!bCanNext)
        return;
    
    if (not NextDialogue())
    {
        EndView();
    }
}

void UDialogueSystemUserWidget::SetDialogueRow(const FDialogueTableRow* DialogueRow)
{
    if (!DialogueRow)
        return;
    
    MonologUserWidget->SetVisibility(ESlateVisibility::Hidden);
    DialogUserWidget->SetVisibility(ESlateVisibility::Hidden);

    switch (DialogueRow->View)
    {
        case EDialogueView::Monolog:
            LaunchMonolog(DialogueRow->MonologParameters);
            DialogUserWidget->Clear();
            break;
        case EDialogueView::Dialog:
            LaunchDialog(DialogueRow->DialogParameters);
            MonologUserWidget->Clear();
            break;
    }
}

void UDialogueSystemUserWidget::LaunchMonolog(const FMonologParameters& MonologParameters)
{
    bCanNext = false;
    MonologUserWidget->OnAnimationEnd.BindWeakLambda(this, [this]()
    {
        bCanNext = true;
    });
    
    MonologUserWidget->SetVisibility(ESlateVisibility::Visible);
    MonologUserWidget->SetMonolog(MonologParameters);
}

void UDialogueSystemUserWidget::LaunchDialog(const FDialogParameters& DialogParameters) const
{
    DialogUserWidget->SetVisibility(ESlateVisibility::Visible);
    DialogUserWidget->SetDialog(DialogParameters);
}

void UDialogueSystemUserWidget::ClearMonolog() const
{
    MonologUserWidget->SetVisibility(ESlateVisibility::Hidden);
    MonologUserWidget->Clear();
}

void UDialogueSystemUserWidget::ClearDialog() const
{
    DialogUserWidget->SetVisibility(ESlateVisibility::Hidden);
    DialogUserWidget->Clear();
}

ABasePlayerController* UDialogueSystemUserWidget::GetBasePlayerController() const
{
    return Cast<ABasePlayerController>(GetOwningPlayer());
}
