// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "Components/BoxComponent.h"
#include "Engine/Light.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

class UWavesSystemComponent;
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

    void DestroyActorsInRoom() const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Scene Component")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Waves System Component")
    UWavesSystemComponent* pWavesSystemComponent;

    virtual void BeginPlay() override;

    void BindEvents();
    
    void OnPlayerEnter();
    void OnAllWavesEnd();

private:
    bool m_isEntered;


    // Ceilings
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room|Environment|Manual")
    AActor* roomCeiling;
    
private:
    void SetupCeiling() const;

    
    // Doors
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room|Environment|Manual")
    TArray<ADoor*> inputDoors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room|Environment|Manual")
    TArray<ADoor*> outputDoors;

private:
    void BindInputDoorsForEnter();

    
    // Lights
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room|Environment|Dynamic")
    TArray<ALight*> lightSources;
    
private:
    void BindLightSources();
};
