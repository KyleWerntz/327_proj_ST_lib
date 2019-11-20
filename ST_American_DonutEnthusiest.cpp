

#include "./includes/ST_American_DonutEnthusiest.h"
#include "constants.h"


ST_American_DonutEnthusiest::Smalltalk(int i=1) : Smalltalk_American(AMERICAN_DE, i)	{

}


ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest()	{

}


ST_American_DonutEnthusiest::populatePhrases()	{
	Smalltalk_American::populatePhrases();
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);

}


