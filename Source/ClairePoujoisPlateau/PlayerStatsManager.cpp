// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStatsManager.h"

// Sets default values
APlayerStatsManager::APlayerStatsManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerStatsManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerStatsManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APlayerStatsManager::InitializeStats(int32 playersNumber)
{
	UE_LOG(LogTemp, Warning, TEXT("J'ai initialise les stats !"));
	PlayerNumber = playersNumber;
}

void APlayerStatsManager::GetNumberOfThrees(int32 numberThrees)
{
	ThreesNumber = ThreesNumber + numberThrees;
	UE_LOG(LogTemp, Warning, TEXT("Je récupère les 3! il y en a : %d"), ThreesNumber);
}


void APlayerStatsManager::NumberOfCellsTravelled(int32 numberOfCells)
{
	CellsNumber = CellsNumber + numberOfCells;
	UE_LOG(LogTemp, Warning, TEXT("Je récupère les cases parcourues : %d"), CellsNumber);
}

