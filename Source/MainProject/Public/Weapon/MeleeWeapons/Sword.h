// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "MainProjectCoreTypes.h"
#include "Sword.generated.h"

class UBoxComponent;

UCLASS()
class MAINPROJECT_API ASword : public ABaseWeapon
{
	GENERATED_BODY()
	
public:	
    ASword();
    
    UFUNCTION()
    void OnOffCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void DisableCollision(USkeletalMeshComponent* MeshComp);

    UFUNCTION()
    void OnDamageAllOverlapedActors();

    TArray<FComboElement> GetComboInfo() { return Combos; }

protected:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Attack")
    TArray<FComboElement> Combos;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;

    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY()
    TArray<AActor*> EnemyActors;

    void InitBoxCollision();
};
