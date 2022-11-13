// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable_Interface.h"
#include "Interact_Item.generated.h"

UCLASS()
class TEST_API AInteract_Item : public AActor, public IInteractable_Interface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
		bool bInteractive = true;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		FName Name;
	
public:	
	// Sets default values for this actor's properties
	AInteract_Item();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	 


};
