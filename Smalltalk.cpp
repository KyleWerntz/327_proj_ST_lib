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


// Fills the vector with phrases, then speaks the current phrase
// Move's current phrase to next phrase for the next person to say
std::string Smalltalk::saySomething()	{
	this->populatePhrases();
	std::string phrase = mySmallTalk[current_phrase];

	current_phrase++;
	current_phrase %= mySmallTalk.size();

	std::string return_phrase = nationality + ":" + phrase;
	return return_phrase;
}


// If there is no watch, tell the user
// Otherwise, give the current time
std::string Smalltalk::getTime()	{
	if(pWatch == 0)	{
		return I_DO_NOT_HAVE_A_WATCH;
	}

	return THE_CURRENT_TIME_IS + pWatch.get()->getTime();
}


// If object has no watch, returns an empty pointer
// Otherwise, moves the point off this object and return it
std::unique_ptr<Watch> Smalltalk::takeWatch()	{
	std::unique_ptr<Watch> tempWatch;
	if (pWatch == 0)	{
		return tempWatch;
	}

	tempWatch = std::move(pWatch);
	return tempWatch;
}


// If this object already has a watch, fails
// Otherwise, moves the given watch onto this object
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch)	{
	if (this->pWatch != 0)	{
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}


// Virtual function to be implemented in derived classes
void Smalltalk::populatePhrases()	{
}



