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

class MMC_SKEE_BALL_API SkeeMaster
{

private:

    #define NUMBER_OF_THROWS 10  //Throws per game
	int m_iNumThrow = 0; // Number of current throw

	int m_iScore = 0;

	bool m_bGameover;

	bool checkForGameover() { return m_iNumThrow >= NUMBER_OF_THROWS; }

protected:

public:	

	SkeeMaster();

	// TO-DO: Call on GoalPad to get the current state of score.
	// This method is called right after a throw has been made and GoalPad has
	// updated
	void addToScore();

	void resetScore() { m_iScore = 0; }

	
};

extern SkeeMaster g_SkeeMaster;
