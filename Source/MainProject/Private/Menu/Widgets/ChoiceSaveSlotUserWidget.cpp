// Lazy Pixel. All Rights Reserved.


#include "Menu/Widgets/ChoiceSaveSlotUserWidget.h"

#include "MainProjectGameInstance.h"
#include "Components/Button.h"
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
    if (Exit)
    {
        Exit->OnClicked.AddDynamic(this, &UChoiceSaveSlotUserWidget::OnExit);
    }
    
    uint8 SlotsCount = 0;
    for (const auto& HorizontalBoxChild: SlotsHorizontalBox->GetAllChildren())
    {
        if (USlotUserWidget* SlotWidget = Cast<USlotUserWidget>(HorizontalBoxChild))
        {
            const FString slotName = "Slot " + FString::FromInt(SlotsCount);
            SlotWidget->SetSlot(slotName);
            
            SlotWidget->OnSlotClicked.AddUObject(this, &UChoiceSaveSlotUserWidget::PlaySlot);
            SlotWidget->OnDeleteClicked.AddUObject(this, &UChoiceSaveSlotUserWidget::DeleteSlot, SlotWidget);
            
            SlotsCount++;
        }
    }
}

void UChoiceSaveSlotUserWidget::PlaySlot(const FString& SlotName) const
{
    const auto projectGameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!projectGameInstance)
        return;
    
    const auto progressSaveGame = projectGameInstance->SetCurrentSlot<UProgressSaveGame>(SlotName);
    if (!progressSaveGame)
        return;
        
    projectGameInstance->AsyncLevelLoad(progressSaveGame->GetLevelName());
}

void UChoiceSaveSlotUserWidget::DeleteSlot(const FString& SlotName, USlotUserWidget* SlotWidget)
{
    const auto projectGameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (!projectGameInstance)
        return;

    projectGameInstance->DeleteSlot(SlotName);
    SlotWidget->SetSlot(SlotName);
}

void UChoiceSaveSlotUserWidget::OnExit()
{
    SetVisibility(ESlateVisibility::Hidden);
}
