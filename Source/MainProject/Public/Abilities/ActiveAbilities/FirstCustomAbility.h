// Lazy Pixel. All Rights Reserved.

#pragma once

#include "Abilities/ActiveAbility.h"
#include "CoreMinimal.h"
#include "FirstCustomAbility.generated.h"

class UBoxComponent;

UCLASS()
class MAINPROJECT_API UStrongAttackAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    virtual void Init(ABaseCharacter* Character) override;
    
    virtual bool NativeActivate() override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDuration = 0.2f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDamage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDistance = 2000.0f;
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void EnableCollision();

    UFUNCTION()
    void DisableCollision();

    void OnStrongAbilityEnd();

private:
    FTimerHandle m_timerHandle;
};
