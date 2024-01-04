// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainProjectGameModeBase.generated.h"

class AFloorManager;

UCLASS()
class MAINPROJECT_API AMainProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    AMainProjectGameModeBase();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Environment")
    TSubclassOf<AFloorManager> floorManagerClass;

    virtual void BeginPlay() override;
    
private:
    UPROPERTY()
    AFloorManager* m_pFloorManager = nullptr;
    
    void SpawnFloorManager();
};
