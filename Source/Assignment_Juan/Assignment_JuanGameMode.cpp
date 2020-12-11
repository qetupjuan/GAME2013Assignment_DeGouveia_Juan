// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment_JuanGameMode.h"
#include "Assignment_JuanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssignment_JuanGameMode::AAssignment_JuanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
