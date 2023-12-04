// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealVRProjectGameMode.h"
#include "UnrealVRProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealVRProjectGameMode::AUnrealVRProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
