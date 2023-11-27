// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Character/BaseCharacter.h"
#include "AIBaseCharacter.generated.h"

UCLASS()
class MAINPROJECT_API AAIBaseCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
    AAIBaseCharacter(const FObjectInitializer& ObjInit);
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;
};
