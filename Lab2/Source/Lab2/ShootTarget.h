// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShootTarget.generated.h"

UCLASS()
class LAB2_API AShootTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShootTarget();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Hit)
	bool bIsHit;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	FTimerHandle TimerHandle;

	float CountDownTime;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void DestroyAndClearTimer();

};
