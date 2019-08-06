// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ShootbotCombatGameMode.h"
#include "ShootbotCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootbotCombatGameMode::AShootbotCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/HeroPerson/BP_HeroPerson_Base"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
