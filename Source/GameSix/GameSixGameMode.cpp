// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameSixGameMode.h"
#include "GameSixCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameSixGameMode::AGameSixGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
