// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AIController Begin Play"));

	auto AIControlledTank = GetAIControlledTank();
	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI not possesing tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI  possesing tank: %s"), *AIControlledTank->GetName())
	}
}

ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
	UE_LOG(LogTemp, Warning, TEXT("Tank Posseed"))
}



