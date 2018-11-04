// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Udemy_MPGameMode.h"
#include "Udemy_MPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemy_MPGameMode::AUdemy_MPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
