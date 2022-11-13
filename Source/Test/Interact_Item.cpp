// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact_Item.h"

// Sets default values
AInteract_Item::AInteract_Item()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteract_Item::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteract_Item::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

