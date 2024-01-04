// Fill out your copyright notice in the Description page of Project Settings.


#include "MainProjectGameModeBase.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Environment/FloorManager.h"

AMainProjectGameModeBase::AMainProjectGameModeBase()
{
    DefaultPawnClass = APlayerCharacter::StaticClass();
    PlayerControllerClass = ABasePlayerController::StaticClass();
}

void AMainProjectGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    SpawnFloorManager();
}

void AMainProjectGameModeBase::SpawnFloorManager()
{
    m_pFloorManager = GetWorld()->SpawnActor<AFloorManager>(floorManagerClass);
}
