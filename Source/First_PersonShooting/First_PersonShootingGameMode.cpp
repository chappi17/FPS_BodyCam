// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_PersonShootingGameMode.h"
#include "First_PersonShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_PersonShootingGameMode::AFirst_PersonShootingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
