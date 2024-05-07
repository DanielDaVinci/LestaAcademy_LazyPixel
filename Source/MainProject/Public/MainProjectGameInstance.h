// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/ProgressSaveGame.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "MainProjectGameInstance.generated.h"

class UProgressSaveGame;

UCLASS()
class MAINPROJECT_API UMainProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnPreSaveCurrentSlotSignature, USaveGame*);
    FOnPreSaveCurrentSlotSignature OnPreSaveCurrentSlotEvent;

    DECLARE_MULTICAST_DELEGATE_OneParam(FOnPostSaveCurrentSlotSignature, USaveGame*);
    FOnPostSaveCurrentSlotSignature OnPostSaveCurrentSlotEvent;
    
    FString GetCurrentSlotName() const { return currentSlotName; }

    template<class T> requires std::is_base_of_v<USaveGame, T>
    T* SetCurrentSlot(const FString& SlotName);

    template<class T> requires std::is_base_of_v<USaveGame, T>
    T* GetCurrentSlot() const;
    USaveGame* GetCurrentSlot() const { return GetCurrentSlot<USaveGame>(); }
    
    void SaveCurrentSlot() const;

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Data")
    FString currentSlotName = "";

    UPROPERTY()
    USaveGame* currentSaveGame = nullptr;

public:
    static bool IsExistsSlot(const FString& SlotName);
    
    template<class T> requires std::is_base_of_v<USaveGame, T>
    static T* LoadSlot(const FString& SlotName);
    static USaveGame* LoadSlot(const FString& SlotName) { return LoadSlot<USaveGame>(SlotName); }

    template<class T> requires std::is_base_of_v<USaveGame, T>
    static T* CreateSlot(const FString& SlotName);
    static USaveGame* CreateSlot(const FString& SlotName) { return CreateSlot<USaveGame>(SlotName); }

    template<class T> requires std::is_base_of_v<USaveGame, T>
    static void SaveSlot(const FString& SlotName, T* SaveGame);

    static void DeleteSlot(const FString& SlotName);

private:
    static FString TakeScreenShot(const FString& ScreenShotName, bool bCaptureUI);

    UFUNCTION(Exec)
    static void SetSlotParameters(const FString& SlotName, int32 LevelIndex, int32 RoomIndex);

public:
    DECLARE_MULTICAST_DELEGATE(FOnPreAsyncLevelLoadSignature);
    FOnPreAsyncLevelLoadSignature OnPreAsyncLevelLoad;
    
    DECLARE_MULTICAST_DELEGATE_OneParam(FOnSuccessAsyncLevelLoadSignature, const FString&);
    FOnSuccessAsyncLevelLoadSignature OnSuccessAsyncLevelLoad;
    
    void AsyncLevelLoad(const FString& LevelPath) const;
    void LevelLoad(const FString& LevelName) const;
    
};

template <class T> requires std::is_base_of_v<USaveGame, T>
T* UMainProjectGameInstance::GetCurrentSlot() const
{
    if (!currentSaveGame)
        return LoadSlot<T>(currentSlotName);

    return Cast<T>(currentSaveGame);
}

template <class T> requires std::is_base_of_v<USaveGame, T>
T* UMainProjectGameInstance::SetCurrentSlot(const FString& SlotName)
{
    T* saveGame = nullptr;
    if (IsExistsSlot(SlotName))
    {
        saveGame = LoadSlot<T>(SlotName);
    }
    else
    {
        saveGame = CreateSlot<T>(SlotName);
    }

    if (!saveGame)
        return nullptr;

    if (currentSaveGame)
    {
        SaveSlot(currentSlotName, currentSaveGame);
    }
    
    UE_LOG(LogTemp, Error, TEXT("Current slot: %s"), *SlotName);

    currentSlotName = SlotName;
    currentSaveGame = saveGame;
    return saveGame;
}

template <class T> requires std::is_base_of_v<USaveGame, T>
T* UMainProjectGameInstance::LoadSlot(const FString& SlotName)
{
    UE_LOG(LogTemp, Error, TEXT("Load slot: %s"), *SlotName);
    return Cast<T>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
}

template <class T> requires std::is_base_of_v<USaveGame, T>
T* UMainProjectGameInstance::CreateSlot(const FString& SlotName)
{
    const auto saveGame = Cast<T>(UGameplayStatics::CreateSaveGameObject(T::StaticClass()));
    if (saveGame)
    {
        SaveSlot(SlotName, saveGame);
    }

    return saveGame;
}

template <class T> requires std::is_base_of_v<USaveGame, T>
void UMainProjectGameInstance::SaveSlot(const FString& SlotName, T* SaveGame)
{
    UE_LOG(LogTemp, Error, TEXT("Save slot: %s"), *SlotName);
    if (SaveGame)
    {
        UGameplayStatics::SaveGameToSlot(SaveGame, SlotName, 0);
    }
    else
    {
        DeleteSlot(SlotName);
    }
}