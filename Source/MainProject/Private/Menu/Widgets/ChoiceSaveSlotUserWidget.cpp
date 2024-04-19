// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/ChoiceSaveSlotUserWidget.h"

#include "MainProjectGameInstance.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"
#include "Menu/Widgets/SlotUserWidget.h"

void UChoiceSaveSlotUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BindEvents();
}

void UChoiceSaveSlotUserWidget::BindEvents()
{
    uint8 SlotsCount = 0;
    for (uint8 i = 0; i < SlotsHorizontalBox->GetChildrenCount(); i++)
    {
        if (const auto& SlotWidget = Cast<USlotUserWidget>(SlotsHorizontalBox->GetChildAt(i)))
        {
            SlotWidget->OnSlotClicked.AddUObject(this, &UChoiceSaveSlotUserWidget::PlaySlot, SlotsCount);
            SlotWidget->OnDeleteClicked.AddUObject(this, &UChoiceSaveSlotUserWidget::DeleteSlot, SlotsCount);
            SlotsCount++;
        }
    }
}

void UChoiceSaveSlotUserWidget::PlaySlot(uint8 Index)
{
    const auto projectGameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!projectGameInstance)
        return;

    const FString slotName = "Slot " + FString::FromInt(Index);
    const auto progressSaveGame = projectGameInstance->SetCurrentSlot<UProgressSaveGame>(slotName);
    if (!progressSaveGame)
        return;
        
    projectGameInstance->AsyncLevelLoad(progressSaveGame->GetLevelName());
}

void UChoiceSaveSlotUserWidget::DeleteSlot(uint8 Index)
{
    const auto projectGameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!projectGameInstance)
        return;

    projectGameInstance->DeleteSlot("Slot " + FString::FromInt(Index));
}
