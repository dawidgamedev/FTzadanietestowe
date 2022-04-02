// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZadanieTestoweGameMode.h"
#include "ZadanieTestoweCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZadanieTestoweGameMode::AZadanieTestoweGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
