// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueData.h"
#include "DialogueSystemUserWidget.generated.h"


struct FPlotDialogue;
class ABasePlayerController;
class UDialogUserWidget;
class UMonologUserWidget;

UCLASS()
class MAINPROJECT_API UDialogueSystemUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    DECLARE_MULTICAST_DELEGATE(FOnStartDialogueSignature);
    FOnStartDialogueSignature OnStartDialogue;

    DECLARE_MULTICAST_DELEGATE(FOnEndDialogueSignature);
    FOnEndDialogueSignature OnEndDialogue;
    
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

protected:
    virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
    virtual FReply NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

private:
    bool bKeyDowned = false;
    
protected:
    void OnInteract();
    bool NextDialogue();

private:
    bool bCanNext = true;
    
protected:
    void SetDialogueRow(const FDialogueTableRow* DialogueRow);
    void LaunchMonolog(const FMonologParameters& MonologParameters);
    void LaunchDialog(const FDialogParameters& DialogParameters);

private:
    void ClearMonolog() const;
    void ClearDialog() const;
    
protected:
    ABasePlayerController* GetBasePlayerController() const;
};


