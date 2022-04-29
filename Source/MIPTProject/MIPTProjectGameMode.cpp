// Copyright Epic Games, Inc. All Rights Reserved.

#include "MIPTProjectGameMode.h"
#include "MIPTProjectCharacter.h"

AMIPTProjectGameMode::AMIPTProjectGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMIPTProjectCharacter::StaticClass();	
}
