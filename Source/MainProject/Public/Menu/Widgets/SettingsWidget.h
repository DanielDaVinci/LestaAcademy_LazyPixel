// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsWidget.generated.h"

class UButton;
class UImage;

UCLASS()
class MAINPROJECT_API USettingsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
    void SetBackgroundVisibility(ESlateVisibility InVisibility) const;
    
protected:
    UPROPERTY(meta = (BindWidget))
    UImage* BackgroundImage;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;

    virtual void NativeOnInitialized() override;

protected:
    void BindActions();

private:
    UFUNCTION()
    void OnExit();
};
