// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Door.h"
#include "Components/BoxComponent.h"
#include "Engine/Light.h"
#include "GameFramework/Actor.h"
#include "Room.generated.h"

class UCapsuleComponent;
class UWavesSystemComponent;
class AAIBaseCharacter;
class AEnemySpawner;
class ADoor;

UCLASS()
class MAINPROJECT_API ARoom : public AActor
{
	GENERATED_BODY()
	
public:	
	ARoom();

    DECLARE_MULTICAST_DELEGATE(FOnPlayerEnterSignature);
    FOnPlayerEnterSignature OnPlayerEnterEvent;

    DECLARE_MULTICAST_DELEGATE(FOnAllEnemiesDiedSignature);
    FOnAllEnemiesDiedSignature OnAllEnemiesDied;
    
    bool IsEntered() const { return m_isEntered; }

    void TurnOffLight();
    void TurnOnLight();

    void SetCeilingVisibility(bool Visible) const;

    void CloseAllDoors();
    void OpenAllDoors();
    void OpenOutputDoors();
    void OpenInputDoors();

    void SetAsStart();

    void HideEnemiesInRoom();
    void DestroyActorsInRoom() const;

    template<class T> requires std::is_base_of_v<AActor, T>
    TArray<T*> GetOverlapActorsInRoom(TSubclassOf<T> ClassFilter = nullptr);
    
protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Scene Component")
    USceneComponent* pSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UChildActorComponent* pPlayerStartComponent;

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

template <class T> requires std::is_base_of_v<AActor, T>
TArray<T*> ARoom::GetOverlapActorsInRoom(TSubclassOf<T> ClassFilter)
{
    TArray<AActor*> overlappingActors;
    UpdateOverlaps(false);
    GetOverlappingActors(overlappingActors, ClassFilter);

    TArray<T*> castActors;
    for (const auto& actor: overlappingActors)
    {
        if (const auto castActor = Cast<T>(actor))
            castActors.Add(castActor);
    }

    return castActors;
}
