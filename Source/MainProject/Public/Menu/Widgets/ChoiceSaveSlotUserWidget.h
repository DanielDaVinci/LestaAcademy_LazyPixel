// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChoiceSaveSlotUserWidget.generated.h"

class ULoadUserWidget;
class UButton;
class USlotUserWidget;
class UHorizontalBox;
class UImage;

UCLASS()
class MAINPROJECT_API UChoiceSaveSlotUserWidget : public UUserWidget
{
	GENERATED_BODY()
    
public:
    void UpdateWidgetSlots();

protected:
    UPROPERTY(meta = (BindWidget))
    ULoadUserWidget* LoadUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UHorizontalBox* SlotsHorizontalBox;

    UPROPERTY(meta = (BindWidget))
    UButton* Exit;
    
    void NativeOnInitialized() override;

protected:
    void BindEvents();

private:
    void PlaySlot(const FString& SlotName) const;
    void DeleteSlot(const FString& SlotName, USlotUserWidget* SlotWidget);

    UFUNCTION()
    void OnExit();
};
