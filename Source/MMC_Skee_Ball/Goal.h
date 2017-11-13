// This software is under partial ownership by The Ohio State University, 
//for it is a product of student employees. For official policy, see
//https://tco.osu.edu/wp-content/uploads/2013/09/PatentCopyrightPolicy.pdf 
//or contact The Ohio State University's Office of Legal Affairs
/*
Purpose: spawnable class representing one goal option
@author Joy Smith
*/

#pragma once

#include "SkeeMaster.h"
#include "GoalParent.h"
#include "Goal.generated.h"

UCLASS()
class MMC_SKEE_BALL_API AGoal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGoal();

private: 
	int m_iScore;

	// Call SkeeMaster and add score value of this.
	UFUNCTION(BlueprintCallable, Category = "Goal")
		void addScoreToGame();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/*
	   Want the UPROPERTY line, but it gives an error.
	*/
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Goal")
		UStaticMeshComponent *EntityModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Goal"));
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Getting and setting score via blueprints
	UFUNCTION(BlueprintCallable, Category = "Goal")
		void setScore(int score) { m_iScore = score; }
	UFUNCTION(BlueprintCallable, Category = "Goal")
		int getScore() { return m_iScore; }

	
};
