// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Common/Objects/CollisionObject.h"
#include "CollisionCube.generated.h"

UCLASS()
class MAINPROJECT_API ACollisionCube : public ACollisionObject
{
	GENERATED_BODY()

public:
    ACollisionCube();

    void SetBoxExtent(const FVector& Size = FVector(32.0f)) const;
};
