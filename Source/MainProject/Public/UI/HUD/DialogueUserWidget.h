// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Dialogue/DialogueData.h"
#include "DialogueUserWidget.generated.h"


struct FPersonParameter;
class ABasePlayerController;
class UCanvasPanel;
class URichTextBlock;
struct FDialogueTableRow;
class UTextBlock;
class UImage;

UCLASS()
class MAINPROJECT_API UDialogueUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetDialogueData(const UDataTable* DialogueDataTable, bool bWithGamePaused = false);

public:
    static UDialogueUserWidget* GetSingleton() { return m_dialogueUserWidgetSingleInstance; }

private:
    inline static UDialogueUserWidget* m_dialogueUserWidgetSingleInstance = nullptr;
    
protected:
    // Monolog
    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* MonologPanel;

    UPROPERTY(meta = (BindWidget))
    UImage* MonologImage;
    
    // Dialog
    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* DialogPanel;

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

    virtual void NativeOnInitialized() override;

    void StartView();
    void EndView();
    
private:
    TArray<FDialogueTableRow*> DialogueTableRows;
    uint8 CurrentRowIndex = 0;
    
    void BindInteract();
    void UnbindInteract();
    
    virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
    void OnInteract();
    bool NextDialogue();
    
    void SetDialogueRow(const FDialogueTableRow* DialogueRow);
    void SetMonolog(const FMonologParameters& MonologParameters);
    void SetDialog(const FDialogParameters& DialogParameters);
    
    void DisplayLeftPanel(const FPersonParameter& PersonParameter) const;
    void DisplayRightPanel(const FPersonParameter& PersonParameter) const;

    void ClearMonolog() const;
    void ClearDialog() const;

    static void SetZOrder(const UWidget* Widget, int32 ZOrder);
    
protected:
    ABasePlayerController* GetBasePlayerController() const;
};


