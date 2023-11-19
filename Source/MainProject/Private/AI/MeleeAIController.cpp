// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/MeleeAIController.h"

void AMeleeAIController::AttackPlayer()
{
    GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Red, TEXT("Attacking"));
}
