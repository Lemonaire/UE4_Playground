// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab1GameMode.h"
#include "Lab1HUD.h"
#include "Lab1Character.h"
#include "ShootGameState.h"
#include "UObject/ConstructorHelpers.h"

ALab1GameMode::ALab1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALab1HUD::StaticClass();
}

void ALab1GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AShootGameState* GS = GetGameState<AShootGameState>();
	if(GS)
	{
		if(GS->Score > 1)
		{
			OnVictory();
		}
	}
}


void ALab1GameMode::OnVictory_Implementation()
{
}
