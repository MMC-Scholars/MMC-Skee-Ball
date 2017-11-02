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

class MMC_SKEE_BALL_API SkeeMaster
{

private:
#define NUMBER_OF_THROWS 10 //Throws per game
	int m_iNumThrow = 0; //Index of current throw
	int m_iScore = 0;
	bool m_bGameover = false;
	
public:
	SkeeMaster();
	~SkeeMaster();
	void addToScore(int deltaScore) { m_iScore += deltaScore; }

	void resetScore() { m_iScore = 0; }
};

// Instance of skeeMaster to be used in game
extern SkeeMaster g_SkeeMaster;