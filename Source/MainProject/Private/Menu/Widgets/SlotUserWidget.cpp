// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/SlotUserWidget.h"

#include "MainProjectGameInstance.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"

void USlotUserWidget::SetSlot(const FString& SlotName)
{
    m_slotName = SlotName;
    SlotNameText->SetText(FText::FromString(SlotName));
    
    const auto projectGameInstance = GetGameInstance<UMainProjectGameInstance>();
    if (!projectGameInstance)
        return;
    
    if (projectGameInstance->IsExistsSlot(SlotName))
    {
        ExistsGamePanel->SetVisibility(ESlateVisibility::Visible);
        NewGamePanel->SetVisibility(ESlateVisibility::Hidden);
        
        if (const auto progressSaveGame = projectGameInstance->LoadSlot<UProgressSaveGame>(SlotName))
        {
            const auto& progressData = progressSaveGame->ProgressData;

            const FString LevelTextValue = FString::FromInt(progressData.LevelIndex + 1) + TEXT(" этаж");
            LevelText->SetText(FText::FromString(LevelTextValue));

            const FString RoomTextValue = FString::FromInt(progressData.RoomIndex + 1) + TEXT(" комната");
            RoomText->SetText(FText::FromString(RoomTextValue));
        }
    }
    else
    {
        ExistsGamePanel->SetVisibility(ESlateVisibility::Hidden);
        NewGamePanel->SetVisibility(ESlateVisibility::Visible);
    }
}

void USlotUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindActions();
}

void USlotUserWidget::BindActions()
{
    if (SlotButton)
    {
        SlotButton->OnClicked.AddDynamic(this, &USlotUserWidget::OnSlotImageClicked);
    }

    if (DeleteButton)
    {
        DeleteButton->OnClicked.AddDynamic(this, &USlotUserWidget::OnDeleteImageClicked);
    }
}

void USlotUserWidget::OnSlotImageClicked()
{
    OnSlotClicked.Broadcast(m_slotName);
}

void USlotUserWidget::OnDeleteImageClicked()
{
    OnDeleteClicked.Broadcast(m_slotName);
}
