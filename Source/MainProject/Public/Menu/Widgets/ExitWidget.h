// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExitWidget.generated.h"

class UButton;
UCLASS()
class MAINPROJECT_API UExitWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* Agree;
    
    UPROPERTY(meta = (BindWidget))
    UButton* Deny;

    virtual void NativeOnInitialized() override;
    
protected:
    void BindActions();
    
private:
    UFUNCTION()
    void OnAgree();
    UFUNCTION()
    void OnDeny();
};
