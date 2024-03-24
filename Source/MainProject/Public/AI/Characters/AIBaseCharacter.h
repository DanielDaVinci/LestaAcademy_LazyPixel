// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/BaseCharacter.h"
#include "AIBaseCharacter.generated.h"

class ARoom;
class UNiagaraSystem;

UCLASS()
class MAINPROJECT_API AAIBaseCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
    AAIBaseCharacter(const FObjectInitializer& ObjInit);
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    ARoom* enemyRoom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ImpactAnim")
    TArray<UAnimMontage*> impactAnimations;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material Instances")
    TArray<UMaterialInstance*> materialInstances;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VFX")
    UNiagaraSystem* impactEffect;

protected:
    virtual void PostInitializeComponents() override;
    virtual void OnDeath() override;

private:
    void PlayImpactAnim(float DeltaHealth);
    void PlayImpactFX(float DeltaHealth);
    void SetRandomMaterial();
    void EnableRagdoll() const;
};
