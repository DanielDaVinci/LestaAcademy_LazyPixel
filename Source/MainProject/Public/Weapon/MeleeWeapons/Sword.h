// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/BaseWeapon.h"
#include "MainProjectCoreTypes.h"
#include "Sword.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnImpactHitSignature)

class UBoxComponent;

UCLASS()
class MAINPROJECT_API ASword : public ABaseWeapon
{
	GENERATED_BODY()
	
public:
    FOnImpactHitSignature OnImpactHit;
    
    ASword();

    void EnableAttackCollision() const;
    void DisableAttackCollision() const;

    void OnOffCollision();
    void ClearDamagedActors();

    void ChangeMaterial(bool isCharged);

    TArray<FComboElement> GetComboInfo() { return combos; }

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components", DisplayName = "BoxComponent")
    UBoxComponent* pBoxCollision;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon Properties|Sword")
    TArray<FComboElement> combos;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Charge Material")
    UMaterialInstance* chargedMaterial;

    UFUNCTION()
    void OnMeleeWeaponOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
    UPROPERTY()
    TSet<AActor*> alreadyDamagedActors;
       
    void InitBoxCollision();

    UPROPERTY()
    UMaterialInterface* defaultMaterial;
    
    void SetChargedMaterial();
    void SetDefaultMaterial();
};
