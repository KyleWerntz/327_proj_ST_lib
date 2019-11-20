

#include "./includes/Smalltalk.h"
#include "constants.h"

Smalltalk::Smalltalk(std::string myNationality,int iPerson=1)	{
	this->nationality = myNationality;
	this->iPerson = iPerson;
	this->current_phrase = 0;
}


Smalltalk::~Smalltalk(void)	{
}


Smalltalk::saySomething()	{
	std::string phrase = mySmallTalk[current_phrase];

	current_phrase++;
	current_phrase %= mySmallTalk.size();

	std::string return_phrase = nationality + ":" + phrase;
	return return_phrase;
}


Smalltalk::getTime()	{
	if(pWatch == 0)	{
		return I_DO_NOT_HAVE_A_WATCH;
	}
}


Smalltalk::takeWatch()	{
	if (pWatch == 0)	{
		return pWatch;
	}

	pWatch = 0;
}


Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch)	{
	if (pWatch != 0)	{
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}


Smalltalk::populatePhrases()	{
}



