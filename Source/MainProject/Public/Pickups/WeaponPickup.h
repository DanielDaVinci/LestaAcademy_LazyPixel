// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponPickup.generated.h"

class USphereComponent;
class UWidgetComponent;
class ABaseWeapon;

UCLASS()
class MAINPROJECT_API AWeaponPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	AWeaponPickup();
    virtual void Tick(float DeltaTime) override;

protected:
    UPROPERTY(EditDefaultsOnly, Category = "WeaponType")
    TSubclassOf<ABaseWeapon> WeaponClass;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USphereComponent* CollisionComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    USkeletalMeshComponent* WeaponMeshComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
    UWidgetComponent* InteractWidget;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Rotation")
    float RotationYaw = 0.0f;

    virtual void BeginPlay() override;
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
    virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

private:
    FDelegateHandle m_delegateHandle;

    void PickUpHandle();
};
