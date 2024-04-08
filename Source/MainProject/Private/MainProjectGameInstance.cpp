// Lazy Pixel. All Rights Reserved.


#include "MainProjectGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMainProjectGameInstance::SetCurrentSlot(const FString& SlotName)
{
    if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
    {
        LoadProgressSlot(SlotName);
    }
    else
    {
        CreateProgressSlot(SlotName);
    }
}

FString UMainProjectGameInstance::GetCurrentSlot() const
{
    return m_currentSlotName;
}

void UMainProjectGameInstance::UpdateProgressData(const FProgressData& ProgressData) const
{
    m_currentProgressSaveGame->ProgressData = ProgressData;
    const auto delegate = FAsyncSaveGameToSlotDelegate::CreateLambda([this](const FString& SlotName, const int32 UserIndex, bool bIsSuccess)
    {
        OnUpdateProgress.Broadcast(bIsSuccess);
    });
    UGameplayStatics::AsyncSaveGameToSlot(m_currentProgressSaveGame, m_currentSlotName, 0, delegate);
}

FProgressData UMainProjectGameInstance::GetProgressData() const
{
    return m_currentProgressSaveGame->ProgressData;
}

void UMainProjectGameInstance::LoadProgressSlot(const FString& SlotName)
{
    const auto delegate = FAsyncLoadGameFromSlotDelegate::CreateLambda([this](const FString& SlotName, const int32 UserIndex, USaveGame* SaveGameInstance)
    {
        m_currentSlotName = SlotName;
        m_currentProgressSaveGame = Cast<UProgressSaveGame>(SaveGameInstance);
        OnLoadSlot.Broadcast();
        OnLoadSlot.Clear();
    });
    UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0, delegate);
}

void UMainProjectGameInstance::CreateProgressSlot(const FString& SlotName)
{
    const auto progressSaveGameInstance = Cast<UProgressSaveGame>(UGameplayStatics::CreateSaveGameObject(UProgressSaveGame::StaticClass()));
    if (!progressSaveGameInstance)
        return;
    
    m_currentSlotName = SlotName;
    m_currentProgressSaveGame = progressSaveGameInstance;
    OnLoadSlot.Broadcast();
    OnLoadSlot.Clear();
}

void UMainProjectGameInstance::AsyncLevelLoad(const FString& LevelPath)
{
    LoadPackageAsync(LevelPath, FLoadPackageAsyncDelegate::CreateLambda([this](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
    {
        if (Result == EAsyncLoadingResult::Succeeded)
        {
            const FString packageString = PackageName.ToString();
            int32 symbolIndex;
            packageString.FindLastChar('/', symbolIndex);

            const FString levelName = packageString.Mid(symbolIndex + 1, packageString.Len() - symbolIndex - 1);
            AsyncLevelLoadFinished(levelName);
        }
    }), 0, PKG_ContainsMap);
}

void UMainProjectGameInstance::AsyncLevelLoadFinished(const FString& LevelName) const
{
    UGameplayStatics::OpenLevel(GetWorld(), FName(LevelName));
}
