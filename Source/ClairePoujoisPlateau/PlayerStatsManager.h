// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerStatsManager.generated.h"

UCLASS()
class CLAIREPOUJOISPLATEAU_API APlayerStatsManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerStatsManager();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ThreesNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CellsNumber;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitializeStats(int32 playersNumber);

	UFUNCTION(BlueprintCallable)
	void GetNumberOfThrees(int32 numberThrees);

	UFUNCTION(BlueprintCallable)
	void NumberOfCellsTravelled(int32 numberOfCells);
};
