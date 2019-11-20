

#include "./includes/Smalltalk_American.h"
#include "constants.h"


Smalltalk_American::Smalltalk(std::string myNationality, int iPerson=1) : Smalltalk(myNationality, iPerson)	{

}


Smalltalk_American::Smalltalk(int iPerson=1) : Smalltalk(AMERICAN, iPerson)	{

}


Smalltalk_American::~Smalltalk_American()	{

}


Smalltalk_American::populatePhrases()	{
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


