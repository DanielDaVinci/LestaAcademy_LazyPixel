// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnEnterDoorSignature)

UCLASS()
class MAINPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADoor();

    FOnEnterDoorSignature OnEnterDoor;

    UFUNCTION(BlueprintImplementableEvent)
    void Open();

    UFUNCTION(BlueprintImplementableEvent)
    void Close();

    UFUNCTION(BlueprintCallable)
    void BlockDoor(ECollisionChannel Channel) const;

    UFUNCTION(BlueprintCallable)
    void UnblockDoor(ECollisionChannel Channel) const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Root Scene Component")
    USceneComponent* pRootSceneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Collision Component")
    UBoxComponent* pCollisionComponent;
    
    UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components", DisplayName="Arrow Component")
    UArrowComponent* pArrowComponent;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Wall Door Mesh Component")
    UStaticMeshComponent* pWallDoorMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component", DisplayName="Left Door Scene Component")
    USceneComponent* pLeftDoorSceneComponent;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Left Door Mesh Component")
    UStaticMeshComponent* pLeftDoorMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component", DisplayName="Right Door Scene Component")
    USceneComponent* pRightDoorSceneComponent;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Right Door Mesh Component")
    UStaticMeshComponent* pRightDoorMeshComponent;
    
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

    bool IsPlayerEntry(const AActor* OtherActor) const;
    
};
