// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab2GameMode.h"
#include "Lab2Character.h"
#include "Lab2HUD.h"
#include "ShootGameState.h"
#include "UObject/ConstructorHelpers.h"

ALab2GameMode::ALab2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// use our custom HUD class
	HUDClass = ALab2HUD::StaticClass();

}

void ALab2GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AShootGameState* GS = GetGameState<AShootGameState>();
	if(GS)
	{
		if(GS->Score >= 10)
		{
			OnVictory();
		}
	}
}


void ALab2GameMode::OnVictory_Implementation()
{
}
