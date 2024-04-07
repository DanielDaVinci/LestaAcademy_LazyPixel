// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsWidget.generated.h"

class UButton;
UCLASS()
class MAINPROJECT_API USettingsWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;

    virtual void NativeOnInitialized() override;    
private:
    UFUNCTION()
    void OnExit();
};
