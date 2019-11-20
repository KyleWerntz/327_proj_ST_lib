/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: 16 Nov 2019
 *      Author: Kyle Werntz
 */

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"


// Constructor to pass the iPerson'th American Donut Enthusiest through the base class
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(AMERICAN_DE, i)	{

}


// Destructor
ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest()	{

}


// Add all American and American Donut Enthusiest phrases to the vector of phrases
void ST_American_DonutEnthusiest::populatePhrases()	{

	// add all American phrases
	Smalltalk_American::populatePhrases();

	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}


