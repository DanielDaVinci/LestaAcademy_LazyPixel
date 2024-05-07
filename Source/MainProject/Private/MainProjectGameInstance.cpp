// Lazy Pixel. All Rights Reserved.


#include "MainProjectGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMainProjectGameInstance::SaveCurrentSlot() const
{
    OnPreSaveCurrentSlotEvent.Broadcast(GetCurrentSlot());
    
    if (currentSaveGame)
    {
        if (const auto progressSaveGame = GetCurrentSlot<UProgressSaveGame>())
        {
            auto& progressData = progressSaveGame->ProgressData;
            progressData.ScreenShotPath = TakeScreenShot(currentSlotName, true);
        }
    }
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

FString UMainProjectGameInstance::TakeScreenShot(const FString& ScreenShotName, bool bCaptureUI)
{
    FScreenshotRequest::RequestScreenshot(ScreenShotName, bCaptureUI, false);
#if UE_GAME
    return "/Saved/Screenshots/Windows/" + ScreenShotName;
#elif UE_EDITOR
    return "/Saved/Screeshots/WindowsEditor/" + ScreenShotName;
#endif
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
