// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionObject.generated.h"

DECLARE_MULTICAST_DELEGATE_SixParams(FOnBeginOverlapSignature, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int32, bool, const FHitResult &)
DECLARE_MULTICAST_DELEGATE_FourParams(FOnEndOverlapSignature, UPrimitiveComponent*, AActor*, UPrimitiveComponent*, int32)

UCLASS()
class MAINPROJECT_API ACollisionObject : public AActor
{
	GENERATED_BODY()
	
public:
    FOnBeginOverlapSignature OnBeginOverlap;
    FOnEndOverlapSignature OnEndOverlap;
    
	ACollisionObject();

    void Enable() const;
    void Disable() const;

    void SetObjectType(ECollisionChannel CollisionChannel) const;
    void SetResponseOnlyPawn() const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Component", DisplayName = "Scene Component")
    USceneComponent* pSceneComponent;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "Collision Component")
    UShapeComponent* pCollisionComponent;
    
	virtual void BeginPlay() override;

private:
    void BindAction();

    UFUNCTION()
    void OnCollisionComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

    UFUNCTION()
    void OnCollisionComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
