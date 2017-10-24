// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs


#include "Skee_master.h"


// Sets default values
ASkee_master::ASkee_master()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//TO-DO: Implement.
bool ASkee_master::CheckForGameover() 
{
	//Placeholder so game will compile.
	return false;
}

// Called when the game starts or when spawned
void ASkee_master::BeginPlay()
{
	Super::BeginPlay();
	
}

ASkee_master::ASkee_master() {

}
// Called every frame
void ASkee_master::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//TO-DO: implement.
void ASkee_master::CalculateScore()
{
	//TO-DO call methods from triggers to update score.

	//check if the game is over
}

