/*
 * Smalltalk.cpp
 *
 *  Created on: 16 Nov 2019
 *      Author: Kyle Werntz
 */

#include "./includes/Smalltalk.h"
#include "./includes/constants.h"


// Create a Smalltalk object with a nationality and numbered identity
// The vector's current phrase is initialized to 0, the starting phrase
Smalltalk::Smalltalk(std::string myNationality,int iPerson) : nationality(myNationality), iPerson(iPerson), current_phrase(0)	{
}


// Destructor
Smalltalk::~Smalltalk(void)	{
}


std::string Smalltalk::saySomething()	{

	// Fills mySmallTalk with appropriate phrases, then iterates to next phrase
	this->populatePhrases();
	std::string phrase = mySmallTalk[current_phrase];

	current_phrase++;
	current_phrase %= mySmallTalk.size();

	//proper format is "nationality:phrase"
	std::string return_phrase = nationality + ":" + phrase;
	return return_phrase;
}


std::string Smalltalk::getTime()	{

	// If there is no watch, tell the user
	if(pWatch == 0)	{
		return I_DO_NOT_HAVE_A_WATCH;
	}

	// Otherwise, give the current time
	return THE_CURRENT_TIME_IS + pWatch.get()->getTime();
}


std::unique_ptr<Watch> Smalltalk::takeWatch()	{

	// If object has no watch, returns an empty pointer
	std::unique_ptr<Watch> tempWatch;
	if (pWatch == 0)	{
		return tempWatch;
	}

	// Otherwise, moves the point off this object and return it
	tempWatch = std::move(pWatch);
	return tempWatch;
}


bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch)	{

	// If this object already has a watch, fails
	if (this->pWatch != 0)	{
		return false;
	}

	// Otherwise, moves the given watch onto this object
	this->pWatch = std::move(pWatch);
	return true;
}


// Virtual function to be implemented in derived classes
void Smalltalk::populatePhrases()	{
}



