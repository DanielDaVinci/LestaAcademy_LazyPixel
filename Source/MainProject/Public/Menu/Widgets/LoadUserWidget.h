// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoadUserWidget.generated.h"

class ABasePlayerController;
class UBackgroundBlur;
class UProgressBar;

UCLASS()
class MAINPROJECT_API ULoadUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    virtual void NativeOnInitialized() override;

    void OnPreAsyncLevelLoad();
    void OnSuccessAsyncLoadLevel(const FString& LevelName);

private:
    FString m_loadLevelName = "";
    
    void BindEvents();
    
protected:
    UPROPERTY(meta = (BindWidget))
    UProgressBar* LoadProgressBar;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI", meta = (ClampMin="1"))
    int32 loadingParts = 19;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float loadingPartTimeRate = 0.5f;
    
private:
    FTimerHandle m_progressTimerHandle;
    float m_currentProgressTime = 0.0f;
    
    void StartProgressLoad();
    void UpdateProgressTimer();

protected:
    UPROPERTY(meta = (BindWidget))
    UBackgroundBlur* FinishBackgroundBlur;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float finishingAnimationDuration = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    float finishingAnimationTimeRate = 0.05f;

private:
    FTimerHandle m_finishAnimationTimerHandle;
    float m_currentFinishAnimationTime = 0.0f;
    
    void StartFinishAnimation();
    void UpdateFinishAnimation();
    void EndFinishAnimation();

    ABasePlayerController* GetBasePlayerController() const;
};
