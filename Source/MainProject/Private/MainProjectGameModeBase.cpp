// Fill out your copyright notice in the Description page of Project Settings.


#include "MainProjectGameModeBase.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Environment/FloorManager.h"
#include "AI/Characters/RangeAICharacter.h"

AMainProjectGameModeBase::AMainProjectGameModeBase()
{
    DefaultPawnClass = APlayerCharacter::StaticClass();
    PlayerControllerClass = ABasePlayerController::StaticClass();
}

void AMainProjectGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    ARangeAICharacter::InitDropRate();
}
