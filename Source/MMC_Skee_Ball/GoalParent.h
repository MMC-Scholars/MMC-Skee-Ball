// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
Purpose: Parent class for each goal type
@author Joy Smith
*/

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoalParent.generated.h"

UCLASS()
class MMC_SKEE_BALL_API AGoalParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoalParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
