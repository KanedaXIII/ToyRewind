// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Demo3rd.h"
#include "Demo3rdGameMode.h"
#include "Demo3rdCharacter.h"

ADemo3rdGameMode::ADemo3rdGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
