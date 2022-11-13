// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Lifted_Item.h"
#include "Pass.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API APass : public ALifted_Item
{
	GENERATED_BODY()

		APass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool GetValidPass();
	UFUNCTION(BlueprintCallable)
	void SetValidPass(bool value);

private:

	UPROPERTY (EditAnywhere)
	bool bValid = true;
};
