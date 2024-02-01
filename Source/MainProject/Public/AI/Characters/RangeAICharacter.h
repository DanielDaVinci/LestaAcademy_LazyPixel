// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI/Characters/AIBaseCharacter.h"
#include "RangeAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class MAINPROJECT_API ARangeAICharacter : public AAIBaseCharacter
{
	GENERATED_BODY()

public:
    ARangeAICharacter(const FObjectInitializer& ObjInit);
    virtual void OnDeath() override;
};
