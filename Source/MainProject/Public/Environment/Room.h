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
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAllEnemiesDiedSignature, ARoom*)

UCLASS()
class MAINPROJECT_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	ARoom();

    FOnPlayerEnterSignature OnPlayerEnterEvent;
    FOnAllEnemiesDiedSignature OnAllEnemiesDied;
    
    bool IsEntered() const { return m_isEntered; }

    void TurnOffLight();
    void TurnOnLight();

    void SetCeilingVisibility(bool Visible);

    void CloseAllDoors();
    void OpenAllDoors();
    void OpenOutputDoors();
    void OpenInputDoors();

    void DestroyActorsInRoom();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Scene Component")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Manual")
    AActor* roomCeiling;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Manual")
    TArray<ADoor*> inputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Manual")
    TArray<ADoor*> outputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Manual")
    TArray<AEnemySpawner*> enemySpawners;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Dynamic")
    TArray<AAIBaseCharacter*> enemies;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment|Dynamic")
    TArray<ALight*> lightSources;

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
};
