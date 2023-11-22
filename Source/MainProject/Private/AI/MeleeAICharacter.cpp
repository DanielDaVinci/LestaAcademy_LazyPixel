// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/MeleeAICharacter.h"

#include "AIController.h"
#include "AI/MeleeAIController.h"
#include "Character/Player/Components/HealthComponent.h"
#include "Kismet/GameplayStatics.h"


AMeleeAICharacter::AMeleeAICharacter(const FObjectInitializer& ObjInit)
{
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AMeleeAIController::StaticClass();
}