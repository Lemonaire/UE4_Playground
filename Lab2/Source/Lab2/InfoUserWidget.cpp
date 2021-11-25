// Fill out your copyright notice in the Description page of Project Settings.


#include "InfoUserWidget.h"

#include "ShootGameState.h"

FString UInfoUserWidget::GetScore() const
{
    return "Score: " +  FString::FromInt(GetWorld()->GetGameState<AShootGameState>()->Score);
}

FString UInfoUserWidget::GetUsername() const
{
    return "Player: " + GetWorld()->GetGameState<AShootGameState>()->Username;
}


