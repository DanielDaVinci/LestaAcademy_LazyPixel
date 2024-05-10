// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePickup.generated.h"

class USphereComponent;
class UWidgetComponent;
class APlayerCharacter;
class ABasePlayerController;

UCLASS()
class MAINPROJECT_API ABasePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	ABasePickup();
    virtual void Tick(float DeltaTime) override{};

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "CollisionComponent")
    USphereComponent* pCollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "MeshComponent")
    UMeshComponent* pBaseMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "InteractWidget")
    UWidgetComponent* pInteractWidget;

    virtual void BeginPlay() override;
    
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;
    
    virtual void OnPickUpHandle(APlayerCharacter* PlayerCharacter){};
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPickUpEvent();

    void DisableCollision();

private:
    ABasePlayerController* GetBasePlayerController(AActor* Character) const;
};
