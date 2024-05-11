// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DialogueData.h"
#include "Blueprint/UserWidget.h"
#include "MonologUserWidget.generated.h"

class UImage;
class UCanvasPanel;

UCLASS()
class MAINPROJECT_API UMonologUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    DECLARE_DELEGATE(FOnAnimationEndSignature);
    FOnAnimationEndSignature OnAnimationEnd;
    
    void SetMonolog(const FMonologParameters& MonologParameters);

    void Clear() const;
    
protected:
    UPROPERTY(meta = (BindWidget))
    UImage* CurrentMonologImage;

    UPROPERTY(meta = (BindWidget))
    UImage* NextMonologImage;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* SwitchAnimation;

    virtual void NativeOnInitialized() override;

private:
    void BindEvents();

    void SetMonologParameters(const FMonologParameters& MonologParameters) const;
    
    void StartSwitchAnimation();
    
    UFUNCTION()
    void OnFinishedSwitchAnimation();
    
};
