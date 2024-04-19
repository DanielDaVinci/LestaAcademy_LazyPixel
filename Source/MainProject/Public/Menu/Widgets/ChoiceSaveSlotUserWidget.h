// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChoiceSaveSlotUserWidget.generated.h"

class USlotUserWidget;
class UHorizontalBox;
class UImage;

UCLASS()
class MAINPROJECT_API UChoiceSaveSlotUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* SlotsHorizontalBox;
    
    void NativeOnInitialized() override;

protected:
    void BindEvents();

private:
    void PlaySlot(uint8 Index);
    void DeleteSlot(uint8 Index);
};
