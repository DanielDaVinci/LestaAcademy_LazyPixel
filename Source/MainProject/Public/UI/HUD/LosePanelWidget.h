// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LosePanelWidget.generated.h"

class UHealthComponent;
class ABaseCharacter;
class UButton;

UCLASS()
class MAINPROJECT_API ULosePanelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    UButton* pRestartButton;

    UPROPERTY(meta = (BindWidget))
    UButton* pMenuButton;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lose Panel Delay")
    float losePanelDelay = 1.f;

    virtual void NativeOnInitialized() override;

private:
    void BindActions();
    void BindEvents();

protected:
    UFUNCTION()
    void OnRestartButtonClicked();

    UFUNCTION()
    void OnMenuButtonClicked();

    void OnPlayerDied();

protected:
    ABaseCharacter* GetOwningPlayerCharacter() const;
    UHealthComponent* GetHealthComponent() const;
};
