// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGBattleSimGameMode.h"
#include "RPGBattleSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPGBattleSimGameMode::ARPGBattleSimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
