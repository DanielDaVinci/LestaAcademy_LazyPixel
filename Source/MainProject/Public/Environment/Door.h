// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class MAINPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADoor();

    UFUNCTION(BlueprintImplementableEvent)
    void Open();

    UFUNCTION(BlueprintImplementableEvent)
    void Close();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Root Scene Component")
    USceneComponent* pRootSceneComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Wall Door Mesh Component")
    UStaticMeshComponent* pWallDoorMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component", DisplayName="Left Door Scene Component")
    USceneComponent* pLeftDoorSceneComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Left Door Mesh Component")
    UStaticMeshComponent* pLeftDoorMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component", DisplayName="Right Door Scene Component")
    USceneComponent* pRightDoorSceneComponent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", DisplayName="Right Door Mesh Component")
    UStaticMeshComponent* pRightDoorMeshComponent;

};
