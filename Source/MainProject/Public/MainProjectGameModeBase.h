// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainProjectGameModeBase.generated.h"

class UFloorManagerComponent;
class AFloorManager;

UCLASS()
class MAINPROJECT_API AMainProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    AMainProjectGameModeBase();

public:
    AFloorManager* GetFloorManager() const { return floorManager; }

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment")
    AFloorManager* floorManager;

    virtual void StartPlay() override;
    virtual void BeginPlay() override;
    
protected:
    virtual void PrePlayerStart();
    virtual void PostPlayerStart();

public:
    virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;
};
