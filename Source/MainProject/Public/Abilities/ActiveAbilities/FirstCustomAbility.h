// Lazy Pixel. All Rights Reserved.

#pragma once

#include "Abilities/ActiveAbility.h"
#include "CoreMinimal.h"
#include "FirstCustomAbility.generated.h"

class ACollisionCube;
class UBoxComponent;

UCLASS()
class MAINPROJECT_API UStrongAttackAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    virtual bool NativeActivate() override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDuration = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDamage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDistance = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    UAnimMontage* pAbilityAnimation;

    virtual void BeginPlay() override;
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    void OnStrongAbilityEnd();

private:
    FTimerHandle m_timerHandle;

protected:
    void SpawnCubeCollision();

private:
    UPROPERTY()
    ACollisionCube* m_pCubeCollision;
};
