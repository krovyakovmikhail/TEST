// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "Interaction_Component.generated.h"


UCLASS( ClassGroup = "Collision", meta = (DisplayName = "InteractCollision",  BlueprintSpawnableComponent))

class TEST_API UInteraction_Component : public UBoxComponent
{
	GENERATED_BODY()


protected:
		UPROPERTY(BlueprintReadWrite)
		AActor* ActorToInteract;



public:	
	// Sets default values for this component's properties
	UInteraction_Component();

	UFUNCTION(BlueprintCallable)
		void Interact();	


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
