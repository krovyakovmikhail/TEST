// Fill out your copyright notice in the Description page of Project Settings.


#include "Lifted_Item.h"

ALifted_Item::ALifted_Item()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALifted_Item::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALifted_Item::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
