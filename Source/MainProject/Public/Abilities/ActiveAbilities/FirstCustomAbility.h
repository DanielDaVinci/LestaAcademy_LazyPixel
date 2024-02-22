// Lazy Pixel. All Rights Reserved.

#pragma once

#include "Abilities/ActiveAbility.h"
#include "CoreMinimal.h"
#include "Character/Player/Components/PlayerMovementComponent.h"
#include "FirstCustomAbility.generated.h"

class ACollisionCube;
class UBoxComponent;

UCLASS()
class MAINPROJECT_API UStrongAttackAbility : public UActiveAbility
{
    GENERATED_BODY()

public:
    virtual bool NativeActivate() override;
    void Press();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDuration = 0.4f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDamage = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityDistance = 2000.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float timeDilation = 0.3f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float defaultTimeDilation = 1.f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    float abilityUseTime = 3.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Params")
    UAnimMontage* pAbilityAnimation;

    virtual void BeginPlay() override;

    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnMontageEndedHandle(UAnimMontage* Montage, bool bInterrupted);

    void OnStrongAbilityEnd();

private:
    bool m_isAbilityActivationButtonPressed;
    FTimerHandle m_abilityDurationHandle;
    FTimerHandle m_abilityUseHandle;

protected:
    void SpawnCubeCollision();

private:
    UPROPERTY()
    ACollisionCube* m_pCubeCollision;
    UPlayerMovementComponent* m_playerMovementComponent;
    ABasePlayerController* m_playerController;
    
    void RotateCharacterInMouseDirection();
    void UseAbility();
};
