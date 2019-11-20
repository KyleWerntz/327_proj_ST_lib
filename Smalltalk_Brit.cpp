/*
 * Smalltalk_Brit
 *
 *  Created on: 16 Nov 2019
 *      Author: Kyle Werntz
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"


// Constructor to pass the iPerson'th Brit through the base class
Smalltalk_Brit::Smalltalk_Brit(int iPerson) : Smalltalk(BRIT, iPerson)	{

}


// Destructor
Smalltalk_Brit::~Smalltalk_Brit()	{

}


// Add all British phrases to the vector of phrases
void Smalltalk_Brit::populatePhrases()	{
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}


