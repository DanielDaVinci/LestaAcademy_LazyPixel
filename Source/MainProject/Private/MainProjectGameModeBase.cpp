// Fill out your copyright notice in the Description page of Project Settings.


#include "MainProjectGameModeBase.h"

#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"

AMainProjectGameModeBase::AMainProjectGameModeBase()
{
    DefaultPawnClass = APlayerCharacter::StaticClass();
    PlayerControllerClass = ABasePlayerController::StaticClass();
}
