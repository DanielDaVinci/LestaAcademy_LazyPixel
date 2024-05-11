// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueData.h"
#include "DialogueSystemUserWidget.generated.h"


class ABasePlayerController;
class UDialogUserWidget;
class UMonologUserWidget;

UCLASS()
class MAINPROJECT_API UDialogueSystemUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetDialogueData(const UDataTable* DialogueDataTable,
        bool bStartAnimation = true,
        bool bEndAnimation = true,
        bool bGamePause = false);

public:
    static UDialogueSystemUserWidget* GetSingleton() { return m_dialogueUserWidgetSingleInstance; }

private:
    inline static UDialogueSystemUserWidget* m_dialogueUserWidgetSingleInstance = nullptr;
    
protected:
    UPROPERTY(meta = (BindWidget))
    UMonologUserWidget* MonologUserWidget;
    
    UPROPERTY(meta = (BindWidget))
    UDialogUserWidget* DialogUserWidget;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* StartDialogueAnimation;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* EndDialogueAnimation;

    virtual void NativeOnInitialized() override;

    void StartView();
    void EndView();
    
private:
    TArray<FDialogueTableRow*> DialogueTableRows;
    uint8 CurrentRowIndex = 0;

    bool bWithStartAnimation;
    bool bWithEndAnimation;
    bool bWithGamePause;
    
    void BindInteract();
    void UnbindInteract();
    
    virtual FReply NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
    
    void OnInteract();
    bool NextDialogue();

private:
    bool bCanNext = true;
    
protected:
    void SetDialogueRow(const FDialogueTableRow* DialogueRow);
    void LaunchMonolog(const FMonologParameters& MonologParameters);
    void LaunchDialog(const FDialogParameters& DialogParameters) const;

private:
    const FDialogueTableRow* CurrentDialogRow = nullptr;

    void ClearMonolog() const;
    void ClearDialog() const;
    
protected:
    ABasePlayerController* GetBasePlayerController() const;
};


