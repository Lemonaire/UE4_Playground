// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

#include "ShootGameState.h"

FString UMyUserWidget::GetScore() const
{
	return "Score: " +  FString::FromInt(GetWorld()->GetGameState<AShootGameState>()->Score);
}

FString UMyUserWidget::GetUsername() const
{
	return "Player: " + GetWorld()->GetGameState<AShootGameState>()->Username;
}


