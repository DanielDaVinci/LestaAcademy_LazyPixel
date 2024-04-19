// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlotUserWidget.generated.h"

class UButton;

UCLASS()
class MAINPROJECT_API USlotUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    DECLARE_MULTICAST_DELEGATE(FOnSlotClickedSignature)
    FOnSlotClickedSignature OnSlotClicked;

    DECLARE_MULTICAST_DELEGATE(FOnDeleteClickedSignature)
    FOnDeleteClickedSignature OnDeleteClicked;
    
protected:
    UPROPERTY(meta = (BindWidget))
    UButton* SlotButton;

    UPROPERTY(meta = (BindWidget))
    UButton* DeleteButton;

    virtual void NativeOnInitialized() override;

protected:
    void BindActions();

private:
    UFUNCTION()
    void OnSlotImageClicked();

    UFUNCTION()
    void OnDeleteImageClicked();
};
