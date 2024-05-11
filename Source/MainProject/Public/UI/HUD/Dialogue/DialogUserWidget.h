// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DialogueData.h"
#include "Blueprint/UserWidget.h"
#include "DialogUserWidget.generated.h"


class UTextBlock;
class UImage;
class URichTextBlock;
class UCanvasPanel;

UCLASS()
class MAINPROJECT_API UDialogUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetDialog(const FDialogParameters& DialogParameters) const;

    void Clear() const;

protected:
    UPROPERTY(meta = (BindWidget))
    URichTextBlock* DialogueText;

    // Dialog left
    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* LeftDialoguePanel;
    
    UPROPERTY(meta = (BindWidget))
    UImage* LeftPersonImage;
    
    UPROPERTY(meta = (BindWidget))
    UTextBlock* LeftPersonNameText;

    // Dialog right
    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* RightDialoguePanel;

    UPROPERTY(meta = (BindWidget))
    UImage* RightPersonImage;

    UPROPERTY(meta = (BindWidget))
    UTextBlock* RightPersonNameText;

private:
    void DisplayLeftPanel(const FPersonParameter& PersonParameter) const;
    void DisplayRightPanel(const FPersonParameter& PersonParameter) const;

    static void SetZOrder(const UWidget* Widget, int32 ZOrder);
};
