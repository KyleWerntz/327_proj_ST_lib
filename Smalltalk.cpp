

#include "./includes/Smalltalk.h"
#include "./includes/constants.h"

Smalltalk::Smalltalk(std::string myNationality,int iPerson) : nationality(myNationality), iPerson(iPerson), current_phrase(0)	{
//	this->nationality = myNationality;
//	this->iPerson = iPerson;
//	this->current_phrase = 0;
}


Smalltalk::~Smalltalk(void)	{
}


std::string Smalltalk::saySomething()	{
	std::string phrase = mySmallTalk[current_phrase];

	current_phrase++;
	current_phrase %= mySmallTalk.size();

	std::string return_phrase = nationality + ":" + phrase;
	return return_phrase;
}


std::string Smalltalk::getTime()	{
	if(pWatch == 0)	{
		return I_DO_NOT_HAVE_A_WATCH;
	}

	return THE_CURRENT_TIME_IS + pWatch.get()->getTime();
}


std::unique_ptr<Watch> Smalltalk::takeWatch()	{
	if (pWatch == 0)	{
		return pWatch;
	}

	pWatch = 0;
	return pWatch;
}


bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch)	{
	if (pWatch != 0)	{
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}


void Smalltalk::populatePhrases()	{
}



