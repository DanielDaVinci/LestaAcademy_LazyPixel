// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndRoom.generated.h"

class UBoxComponent;

UCLASS()
class MAINPROJECT_API AEndRoom : public AActor
{
	GENERATED_BODY()
	
public:
    DECLARE_MULTICAST_DELEGATE(FOnPlayerEnterSignature);
    FOnPlayerEnterSignature OnPlayerEnterEvent;
    
	AEndRoom();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;
    
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

private:
    bool m_bIsEntered = false;
};
