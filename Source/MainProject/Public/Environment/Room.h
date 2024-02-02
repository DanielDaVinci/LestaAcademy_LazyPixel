// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "Components/BoxComponent.h"
#include "Engine/Light.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

class AAIBaseCharacter;
class AEnemySpawner;
class ADoor;
class ARoom;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerEnterSignature, ARoom*)

UCLASS()
class MAINPROJECT_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	ARoom();

    FOnPlayerEnterSignature OnPlayerEnterEvent;

    void TurnOffLight();
    void TurnOnLight();

    bool IsEntered() const { return m_isEntered; }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Scene Component")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<ADoor*> inputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<ADoor*> outputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AActor*> lowerWalls;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AAIBaseCharacter*> enemies;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<ALight*> lightSources;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AEnemySpawner*> enemySpawners;

    virtual void BeginPlay() override;
    
    void OnPlayerEnter();

    UFUNCTION()
    void OnEnemyDied();

private:
    int32 m_currentAliveEnemies;
    bool m_isEntered;

    void BindEnemies();
    void BindInputDoorsForEnter();
    void BindLightSources();
    
    void FindEnemies();
    void BindEnemiesOnDeath();
    
    void CloseAllDoors();
    void OpenAllDoors();
    void OpenOutputDoors();

    void StartSpawn() {}
    void StopSpawn() {}
};
