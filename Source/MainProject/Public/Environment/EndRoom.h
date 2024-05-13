// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndRoom.generated.h"

class ABasePlayerController;
class UWidgetComponent;
class UBoxComponent;

UCLASS()
class MAINPROJECT_API AEndRoom : public AActor
{
	GENERATED_BODY()
	
public:
    DECLARE_MULTICAST_DELEGATE(FOnPlayerEnterSignature)
    FOnPlayerEnterSignature OnPlayerEnterEvent;
    
    DECLARE_MULTICAST_DELEGATE(FOnPlayerInteractSignature);
    FOnPlayerInteractSignature OnPlayerInteractEvent;
    
	AEndRoom();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Room Collision Component")
    UBoxComponent* pRoomCollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UWidgetComponent* pInteractionWidgetComponent;

    virtual void BeginPlay() override;
    
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

    void OnInteract(ABasePlayerController* PlayerController);

private:
    bool m_bIsEntered = false;
};
