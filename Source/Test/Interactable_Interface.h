// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainPlayer.h"
#include "Interactable_Interface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractable_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TEST_API IInteractable_Interface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void I_Interact(AMainPlayer* InteractingPlayer);

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

};
