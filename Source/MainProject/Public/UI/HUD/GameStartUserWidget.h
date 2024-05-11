// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameStartUserWidget.generated.h"

class ABasePlayerController;
class UBackgroundBlur;

UCLASS()
class MAINPROJECT_API UGameStartUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;
    
private:
    void BindEvents();
    
protected:
    UPROPERTY(meta = (BindWidget))
    UBackgroundBlur* StartBackgroundBlur;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float startingDuration = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float startingTimeRate = 0.05f;

private:
    FTimerHandle m_startingAnimationTimerHandle;
    float m_currentStartingAnimationTime = 0.0f;
    
    void StartStartingAnimation();
    void UpdateStartingAnimation();
    void EndStartingAnimation();

    ABasePlayerController* GetBasePlayerController() const;
};
