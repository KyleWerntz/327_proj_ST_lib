/*
 * Smalltalk_American.cpp
 *
 *  Created on: 16 Nov 2019
 *      Author: Kyle Werntz
 */

#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"


// Identical constructor to base class for any derived classes to use
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) : Smalltalk(myNationality, iPerson)	{

}


// Constructor to pass the iPerson'th American through the base class
Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson)	{

}


// Destructor
Smalltalk_American::~Smalltalk_American()	{

}


// Adds all American phrases to the vector of phrases
void Smalltalk_American::populatePhrases()	 {
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


