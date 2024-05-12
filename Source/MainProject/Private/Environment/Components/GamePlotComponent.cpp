// Lazy Pixel. All Rights Reserved.


#include "Environment/Components/GamePlotComponent.h"

#include "MainProjectGameInstance.h"
#include "Environment/FloorManager.h"
#include "Environment/Data/FloorPlotDataAsset.h"
#include "Kismet/GameplayStatics.h"
#include "UI/HUD/Dialogue/DialogueSystemUserWidget.h"

UGamePlotComponent::UGamePlotComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
    
}


void UGamePlotComponent::BeginPlay()
{
	Super::BeginPlay();

    BindEvents();
}

void UGamePlotComponent::PostBeginPlay()
{
    IPrePostBeginInterface::PostBeginPlay();

    OnStartGame();
}

void UGamePlotComponent::BindEvents()
{
    if (const auto FloorManager = GetOwningFloorManager())
    {
        FloorManager->OnPlayerEnterLevelRoom.AddUObject(this, &UGamePlotComponent::OnPlayerEnterRoom);
        FloorManager->OnLevelRoomWaveEnd.AddUObject(this, &UGamePlotComponent::OnRoomWaveEnd);
        FloorManager->OnLevelRoomFirstKill.AddUObject(this, &UGamePlotComponent::OnRoomFirstKill);
    }
}

void UGamePlotComponent::OnStartGame()
{
    UE_LOG(LogTemp, Error, TEXT("StartGame"));
    if (!FloorPlotDataAsset)
        return;

    const auto progressSaveGame = GetCurrentProgressSaveGame();
    if (!progressSaveGame)
        return;

    const FProgressData& progressData = progressSaveGame->ProgressData;
    if (progressData.RoomIndex != -1)
        return;
    
    const auto FilteredPlot = FloorPlotDataAsset->GamePlots.FindByPredicate([](const FPlotDialogue& Plot)
    {
        return Plot.PlotEvent == EPlotEvent::StartGame;
    });

    LaunchPlot(FilteredPlot);
}

void UGamePlotComponent::OnPlayerEnterRoom(int32 RoomIndex)
{
    UE_LOG(LogTemp, Error, TEXT("EnterRoom"));
    if (!FloorPlotDataAsset)
        return;
    
    const auto FilteredPlot = FloorPlotDataAsset->GamePlots.FindByPredicate([&](const FPlotDialogue& Plot)
    {
        return Plot.PlotEvent == EPlotEvent::EnterRoom && Plot.RoomIndex == RoomIndex;
    });

    LaunchPlot(FilteredPlot);
}

void UGamePlotComponent::OnRoomWaveEnd(int32 RoomIndex, int32 WaveIndex)
{
    UE_LOG(LogTemp, Error, TEXT("RoomWave: %d %d"), RoomIndex, WaveIndex);
    if (!FloorPlotDataAsset)
        return;
    
    const auto FilteredPlot = FloorPlotDataAsset->GamePlots.FindByPredicate([&](const FPlotDialogue& Plot)
    {
        return Plot.PlotEvent == EPlotEvent::WaveEnd && Plot.RoomIndex == RoomIndex && Plot.WaveIndex == WaveIndex;
    });

    LaunchPlot(FilteredPlot);
}

void UGamePlotComponent::OnRoomFirstKill(int32 RoomIndex)
{
    UE_LOG(LogTemp, Error, TEXT("FirstKill"));
    if (!FloorPlotDataAsset)
        return;
    
    const auto FilteredPlot = FloorPlotDataAsset->GamePlots.FindByPredicate([&](const FPlotDialogue& Plot)
    {
        return Plot.PlotEvent == EPlotEvent::KillFirstEnemy && Plot.RoomIndex == RoomIndex;
    });

    LaunchPlot(FilteredPlot);
}

void UGamePlotComponent::LaunchPlot(const FPlotDialogue* Plot)
{
    if (!Plot)
        return;

    const FTimerDelegate delegate = FTimerDelegate::CreateUObject(this, &UGamePlotComponent::OnLaunchTimerHandle, Plot);
    GetWorld()->GetTimerManager().SetTimer(launchTimerHandle, delegate, Plot->CallPlotAfterEvent, false);
}


void UGamePlotComponent::OnLaunchTimerHandle(const FPlotDialogue* Plot)
{
    GetWorld()->GetTimerManager().ClearTimer(launchTimerHandle);
    
    if (!Plot)
        return;
    
    const auto DialogueSystemUserWidget = UDialogueSystemUserWidget::GetSingleton();
    if (!DialogueSystemUserWidget)
        return;
    
    DialogueSystemUserWidget->SetDialogueData(
            Plot->PlotDataTable,
            Plot->bStartAnimation,
            Plot->bEndAnimation,
            Plot->bWithGamePause);
}

AFloorManager* UGamePlotComponent::GetOwningFloorManager() const
{
    return Cast<AFloorManager>(GetOwner());
}

UProgressSaveGame* UGamePlotComponent::GetCurrentProgressSaveGame() const
{
    const auto gameInstance = Cast<UMainProjectGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    return gameInstance ? gameInstance->GetCurrentSlot<UProgressSaveGame>() : nullptr;
}

