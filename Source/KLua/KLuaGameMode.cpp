// Copyright Epic Games, Inc. All Rights Reserved.

#include "KLuaGameMode.h"
#include "KLuaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKLuaGameMode::AKLuaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
