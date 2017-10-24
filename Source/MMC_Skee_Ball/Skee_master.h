// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
Purpose: spawnable utility class to handle scoring of skee ball game.

@author Joy Smith
*/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Skee_master.generated.h"

UCLASS()
class MMC_SKEE_BALL_API ASkee_master : public AActor
{
	GENERATED_BODY()
private:

	bool gameover;

	//TO-DO: implement.
	bool CheckForGameover();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	ASkee_master();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// TO-DO: Call methods to figure out which triggers have been
	//hit, add them up, and append them to score.
	UFUNCTION(BlueprintCallable, Category = "skee_master")
		void CalculateScore();
	
};
