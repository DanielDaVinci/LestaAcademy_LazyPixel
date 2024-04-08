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

    FString levelName = "";
    switch (Index)
    {
        case 0:
            levelName = "/Game/Levels/FirstLevel";
            break;
        case 1:
            levelName = "/Game/Levels/SecondLevel";
            break;
        case 2:
            levelName = "/Game/Levels/ThirdLevel";
            break;
    }
    

    projectGameInstance->OnLoadSlot.AddLambda([&, this]()
    {
        projectGameInstance->AsyncLevelLoad(levelName);
    });
    projectGameInstance->SetCurrentSlot("Slot " + FString::FromInt(Index));
}

void UChoiceSaveSlotUserWidget::DeleteSlot(uint8 Index)
{
    
}
