// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/ProgressSaveGame.h"
#include "Engine/GameInstance.h"
#include "MainProjectGameInstance.generated.h"


class UProgressSaveGame;

UCLASS()
class MAINPROJECT_API UMainProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
    DECLARE_MULTICAST_DELEGATE(FOnLoadSlotSignature);
    FOnLoadSlotSignature OnLoadSlot;

    DECLARE_MULTICAST_DELEGATE_OneParam(FOnUpdateProgressSignature, bool)
    FOnUpdateProgressSignature OnUpdateProgress;
        
    void SetCurrentSlot(const FString& SlotName);
    FString GetCurrentSlot() const;
    
    void UpdateProgressData(const FProgressData& ProgressData) const;
    FProgressData GetProgressData() const;

private:
    FString m_currentSlotName = "";
    
    UPROPERTY()
    UProgressSaveGame* m_currentProgressSaveGame = nullptr;

    void LoadProgressSlot(const FString& SlotName);
    void CreateProgressSlot(const FString& SlotName);

public:
    void AsyncLevelLoad(const FString& LevelPath);
    
private:
    void AsyncLevelLoadFinished(const FString& LevelName) const; 
};
