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

UENUM()
enum class GoalHit
{
	ZeroPoints		UMETA(DisplayName = "ZeroPoints"),
	TenPoints		UMETA(DisplayName = "TenPoints"),
	TwentyPoints	UMETA(DisplayName = "TwentyPoints"),
	ThirtyPoints	UMETA(DisplayName = "ThirtyPoints"),
	FortyPoints		UMETA(DisplayName = "FortyPoints"),
	FiftyPoints		UMETA(DisplayName = "FiftyPoints"),
	HundredPoints	UMETA(DisplayName = "HundredPoints")
};


UCLASS()
class MMC_SKEE_BALL_API AGoalPad : public AActor
{
	GENERATED_BODY()

private:	

	// Sets default values for this actor's properties
	AGoalPad();
	static GoalHit lastGoal;
	void updateGoal(FVector RelativeHitLocation);

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
