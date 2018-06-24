// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "InteractionSystemGameMode.h"
#include "InteractionSystemHUD.h"
#include "InteractionSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractionSystemGameMode::AInteractionSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AInteractionSystemHUD::StaticClass();
}
