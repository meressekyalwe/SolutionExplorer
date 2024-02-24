
#include "Enumerator.h"


int Enumerator::getInd()
{
	return ind;
}

void Enumerator::setInd(int ind)
{
	this->ind = ind;
}

Task* Enumerator::getTask()
{
	return &u;
}


Task* Enumerator::current()
{
	return &u;
}
