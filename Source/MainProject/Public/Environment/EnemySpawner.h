// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

class ADoor;

UCLASS()
class MAINPROJECT_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AEnemySpawner();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="Start Capsule Component")
    UCapsuleComponent* pStartCapsuleComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Components", DisplayName="Arrow Component")
    UArrowComponent* pArrowComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Environment", DisplayName="Enemy Door")
    ADoor* pEnemyDoor;
    
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
