// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlotUserWidget.generated.h"

class UImage;
class UCanvasPanel;
class UTextBlock;
class UButton;

UCLASS()
class MAINPROJECT_API USlotUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnSlotClickedSignature, const FString&);
    FOnSlotClickedSignature OnSlotClicked;

    DECLARE_MULTICAST_DELEGATE_OneParam(FOnDeleteClickedSignature, const FString&);
    FOnDeleteClickedSignature OnDeleteClicked;

    void SetSlot(const FString& SlotName);
    
protected:
    UPROPERTY(meta = (BindWidget))
    UTextBlock* SlotNameText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* LevelText;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* RoomText;

    UPROPERTY(meta = (BindWidget))
    UImage* LastGameImage;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* ExistsGamePanel;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* NewGamePanel;
    
    UPROPERTY(meta = (BindWidget))
    UButton* SlotButton;

    UPROPERTY(meta = (BindWidget))
    UButton* DeleteButton;

    virtual void NativeOnInitialized() override;

protected:
    void BindActions();

private:
    FString m_slotName = "";
    
    UFUNCTION()
    void OnSlotImageClicked();

    UFUNCTION()
    void OnDeleteImageClicked();
};
