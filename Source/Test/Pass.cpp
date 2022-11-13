// Fill out your copyright notice in the Description page of Project Settings.


#include "Pass.h"

APass::APass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APass::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APass::GetValidPass()
{
	return bValid;
}

void APass::SetValidPass(bool value)
{
	bValid = value;
}
