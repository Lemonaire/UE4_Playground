// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ShootGameState.generated.h"

/**
 * 
 */
UCLASS()
class LAB1_API AShootGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AShootGameState();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Score;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Username;
};
