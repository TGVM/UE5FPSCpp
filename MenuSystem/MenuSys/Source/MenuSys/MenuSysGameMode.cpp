// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSysGameMode.h"
#include "MenuSysCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMenuSysGameMode::AMenuSysGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
