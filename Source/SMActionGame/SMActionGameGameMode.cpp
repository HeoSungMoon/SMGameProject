// Copyright Epic Games, Inc. All Rights Reserved.

#include "SMActionGameGameMode.h"
#include "SMActionGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASMActionGameGameMode::ASMActionGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
