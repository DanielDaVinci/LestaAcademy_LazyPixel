// Lazy Pixel. All Rights Reserved.


#include "MainProjectGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMainProjectGameInstance::SaveCurrentSlot() const
{
    OnPreSaveCurrentSlotEvent.Broadcast(GetCurrentSlot());
    
    SaveSlot(currentSlotName, currentSaveGame);
    OnPostSaveCurrentSlotEvent.Broadcast(GetCurrentSlot());
}

bool UMainProjectGameInstance::IsExistsSlot(const FString& SlotName)
{
    return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

void UMainProjectGameInstance::DeleteSlot(const FString& SlotName)
{
    UE_LOG(LogTemp, Error, TEXT("Delete slot: %s"), *SlotName);
    UGameplayStatics::DeleteGameInSlot(SlotName, 0);
}

void UMainProjectGameInstance::SetSlotParameters(const FString& SlotName, int32 LevelIndex, int32 RoomIndex)
{
    const auto& progressSaveGame = IsExistsSlot(SlotName) ?
        LoadSlot<UProgressSaveGame>(SlotName) : CreateSlot<UProgressSaveGame>(SlotName);
    
    progressSaveGame->ProgressData.LevelIndex = LevelIndex - 1;
    progressSaveGame->ProgressData.RoomIndex = RoomIndex - 1;
    SaveSlot(SlotName, progressSaveGame);
}

void UMainProjectGameInstance::AsyncLevelLoad(const FString& LevelPath) const
{
    OnPreAsyncLevelLoad.Broadcast();
    LoadPackageAsync(LevelPath, FLoadPackageAsyncDelegate::CreateLambda([this](const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
    {
        if (Result == EAsyncLoadingResult::Succeeded)
        {
            const FString packageString = PackageName.ToString();
            int32 symbolIndex;
            packageString.FindLastChar('/', symbolIndex);

            const FString levelName = packageString.Mid(symbolIndex + 1, packageString.Len() - symbolIndex - 1);
            OnSuccessAsyncLevelLoad.Broadcast(levelName);
        }
    }), 0, PKG_ContainsMap);
}

void UMainProjectGameInstance::LevelLoad(const FString& LevelName) const
{
    if (!GetWorld())
        return;
    
    UGameplayStatics::OpenLevel(GetWorld(), FName(LevelName));
}
