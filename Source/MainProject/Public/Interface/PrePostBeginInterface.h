// Lazy Pixel. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PrePostBeginInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPrePostBeginInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MAINPROJECT_API IPrePostBeginInterface
{
	GENERATED_BODY()

    friend class AMainProjectGameModeBase;
    
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
protected:
    virtual void PreBeginPlay() {}
    virtual void PostBeginPlay() {}
};
