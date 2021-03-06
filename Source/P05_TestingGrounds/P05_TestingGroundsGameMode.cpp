// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "P05_TestingGroundsGameMode.h"
#include "P05_TestingGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AP05_TestingGroundsGameMode::AP05_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Player/Behavior/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AP05_TestingGroundsHUD::StaticClass();
}
