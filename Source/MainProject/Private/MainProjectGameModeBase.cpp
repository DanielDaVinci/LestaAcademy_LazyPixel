// Fill out your copyright notice in the Description page of Project Settings.


#include "MainProjectGameModeBase.h"

#include "EngineUtils.h"
#include "Character/Player/BasePlayerController.h"
#include "Character/Player/PlayerCharacter.h"
#include "Environment/FloorManager.h"
#include "AI/Characters/RangeAICharacter.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

AMainProjectGameModeBase::AMainProjectGameModeBase()
{
    DefaultPawnClass = APlayerCharacter::StaticClass();
    PlayerControllerClass = ABasePlayerController::StaticClass();
}

void AMainProjectGameModeBase::StartPlay()
{
    PrePlayerStart();
    
    Super::StartPlay();
    
    PostPlayerStart();
}

void AMainProjectGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    ARangeAICharacter::InitDropRate();
}

void AMainProjectGameModeBase::PrePlayerStart()
{
    if (!GetWorld())
        return;
    
    for (FActorIterator Iter(GetWorld()); Iter; ++Iter)
    {
        AActor* actor = *Iter;
        if (actor->GetClass()->ImplementsInterface(UPrePostBeginInterface::StaticClass()))
        {
            if (const auto interfaceActor = Cast<IPrePostBeginInterface>(actor))
            {
                interfaceActor->PreBeginPlay();
            }
        }

        for (const auto component: actor->GetComponentsByInterface(UPrePostBeginInterface::StaticClass()))
        {
            if (const auto interfaceComponent = Cast<IPrePostBeginInterface>(component))
            {
                interfaceComponent->PreBeginPlay();
            }
        }
    }
}

void AMainProjectGameModeBase::PostPlayerStart()
{
    for (FActorIterator Iter(GetWorld()); Iter; ++Iter)
    {
        AActor* actor = *Iter;
        if (actor->GetClass()->ImplementsInterface(UPrePostBeginInterface::StaticClass()))
        {
            if (const auto interfaceActor = Cast<IPrePostBeginInterface>(actor))
            {
                interfaceActor->PostBeginPlay();
            }
        }

        for (const auto component: actor->GetComponentsByInterface(UPrePostBeginInterface::StaticClass()))
        {
            if (const auto interfaceComponent = Cast<IPrePostBeginInterface>(component))
            {
                interfaceComponent->PostBeginPlay();
            }
        }
    }
}

AActor* AMainProjectGameModeBase::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
{
    APlayerStart* minPriorityPlayerStart = nullptr;
    for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
    {
        const auto Start = *It;
        if (!minPriorityPlayerStart)
        {
            minPriorityPlayerStart = Start;
        }
        else if (Start && Start->InputPriority < minPriorityPlayerStart->InputPriority)
        {
            minPriorityPlayerStart = Start;
        }
    }

    if (minPriorityPlayerStart)
        return minPriorityPlayerStart;

    return Super::FindPlayerStart_Implementation(Player, IncomingName);
}
