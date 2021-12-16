// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class LAB2_API UInfoUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category="Info")
	virtual FString GetScore() const;
	
	UFUNCTION(BlueprintPure, Category="Info")
	virtual FString GetUsername() const;

};
