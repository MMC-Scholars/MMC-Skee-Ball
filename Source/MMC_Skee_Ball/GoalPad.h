// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
Purpose: Class for goal pad that calculates where it was hit and callse the appropriate score update.

@author Joy Smith
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoalPad.generated.h"
#include "GoalPad.h"

UENUM()
enum GoalHit
{
	ZeroPoints		= 0		UMETA(DisplayName = "ZeroPoints"),
	TenPoints		= 10	UMETA(DisplayName = "TenPoints"),
	TwentyPoints	= 20	UMETA(DisplayName = "TwentyPoints"),
	ThirtyPoints	= 30	UMETA(DisplayName = "ThirtyPoints"),
	FortyPoints		= 40	UMETA(DisplayName = "FortyPoints"),
	FiftyPoints		= 50	UMETA(DisplayName = "FiftyPoints"),
	HundredPoints	= 100	UMETA(DisplayName = "HundredPoints")
};

UCLASS()
class MMC_SKEE_BALL_API AGoalPad : public AActor
{
	GENERATED_BODY()

private:	

	// Sets default values for this actor's properties
	AGoalPad();

	GoalHit lastGoal;

	// TO-DO: implement updateGoal
	void updateGoal(FVector RelativeHitLocation);
	
	// get current score based on state of lastGoal
	int getScore() { return lastGoal; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when object overlaps goal pad
	UFUNCTION(BlueprintImplementableEvent, Category = "GoalPad")
		void BeginOverlap(class AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	
	
};
