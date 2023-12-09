// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

class AAIBaseCharacter;
class AEnemySpawner;
class ADoor;

DECLARE_MULTICAST_DELEGATE(FOnPlayerEnterSignature)
DECLARE_MULTICAST_DELEGATE(FOnPlayerLeaveSignature)

UCLASS()
class MAINPROJECT_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	ARoom();

    FOnPlayerEnterSignature OnPlayerEnterEvent;
    FOnPlayerLeaveSignature OnPlayerLeaveEvent;

    bool IsEntered;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Scene Component")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;
    
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<ADoor*> inputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<ADoor*> outputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AActor*> lowerWalls;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AAIBaseCharacter*> enemies;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Environment")
    TArray<AEnemySpawner*> enemySpawners;

    void OnPlayerEnter();
    void OnPlayerLeave();
    
    void StartSpawn() {};
    void StopSpawn() {};
    
private:
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

protected:
    void CloseAllDoors();
    void OpenAllDoors();
    void OpenOutputDoors();

private:
    int32 currentAliveEnemies;

    void BindEnemyOnDeath();

    UFUNCTION()
    void OnEnemyDied();
};
