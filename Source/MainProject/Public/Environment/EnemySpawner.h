// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

class AAIBaseCharacter;
class ADoor;

UCLASS()
class MAINPROJECT_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemySpawner();

    AAIBaseCharacter* Spawn(const TSubclassOf<AAIBaseCharacter>& AICharacterClass) const;

    void OpenDoor() const;
    void CloseDoor() const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="Start Capsule Component")
    UCapsuleComponent* pStartCapsuleComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="Arrow Component")
    UArrowComponent* pArrowComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Environment", DisplayName="Enemy Door")
    ADoor* pEnemyOutputDoor;

    virtual void BeginPlay() override;
};
