// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestGameModeBase.h"
#include "TestPlayerController.h"
#include "MainPlayer.h"

ATestGameModeBase::ATestGameModeBase()
{
	DefaultPawnClass = ATestGameModeBase::StaticClass();
	PlayerControllerClass = ATestPlayerController::StaticClass();

}
