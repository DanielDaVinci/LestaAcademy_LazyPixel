// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BulletPanelWidget.generated.h"

class ABasePlayerController;
class UVerticalBox;

UCLASS()
class MAINPROJECT_API UBulletPanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UVerticalBox* pBulletsBox;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> bulletWidgetClass;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();

protected:
    ABasePlayerController* GetBasePlayerController() const;
};
