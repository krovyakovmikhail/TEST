// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact_Item.h"
#include "Lifted_Item.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ALifted_Item : public AInteract_Item
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ALifted_Item();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
