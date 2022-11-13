// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainPlayer.generated.h"

class ALifted_Item;

UCLASS()
class TEST_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY (BlueprintReadWrite)
	ALifted_Item* ItemInHand;

public:
	// Sets default values for this character's properties
	AMainPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Take(ALifted_Item* Item);


};
