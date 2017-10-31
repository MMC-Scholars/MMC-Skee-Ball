// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
@author Joy Smith
*/

#include "GoalPad.h"


// Sets default values
AGoalPad::AGoalPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Updates current hid score based on location of the hit
void AGoalPad::updateGoal(FVector RelativeHitLocation)
{
	// TO-DO based on relative location of hit, figure out which goal
	// then update the enumerator to reflect the latest score
	
}

// Called when the game starts or when spawned
void AGoalPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGoalPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGoalPad::BeginOverlap(class AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex)
{
	// Check OtherActor is not null or this.
	if (OtherActor && OtherActor != this && OtherComp)
	{
		// The relative hit location is loc of skee ball minus loc of this.
		FVector RelativeHitLocation = OtherActor->GetActorLocation() - 
			this->GetActorLocation();
		// Update Goal enum based on relative location of hit
		updateGoal(RelativeHitLocation);

		// Destroy the Skee Ball.
		OtherActor->Destroy();
	}


}

