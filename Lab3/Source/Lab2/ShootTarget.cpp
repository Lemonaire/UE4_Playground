// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootTarget.h"

#include "Lab2Projectile.h"
#include "ShootGameState.h"

// Sets default values
AShootTarget::AShootTarget():CountDownTime(3.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// void AShootTarget::NotifyActorBeginOverlap(AActor* OtherActor)
// {
	// Super::NotifyActorBeginOverlap(OtherActor);
	
	// if(OtherActor->IsA(ALab2Projectile::StaticClass()))
	// {
	// 	Cast<AShootGameState>(GetWorld()->GetGameState())->Score ++;
	// 	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AShootTarget::DestroyAndClearTimer, 1.f, true);
	// }
// }

void AShootTarget::DestroyAndClearTimer()
{
	--CountDownTime;
	if (CountDownTime <= 0)
	{
		Destroy();
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}


// Called every frame
void AShootTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(bIsHit)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AShootTarget::DestroyAndClearTimer, 1.f, true);
		bIsHit = false;
	}
}

