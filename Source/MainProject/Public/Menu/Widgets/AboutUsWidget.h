// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AboutUsWidget.generated.h"

class UButton;
UCLASS()
class MAINPROJECT_API UAboutUsWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* Exit;

    virtual void NativeOnInitialized() override;

protected:
    void BindActions();

private:
    UFUNCTION()
    void OnExit();
};
