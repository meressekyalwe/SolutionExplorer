
#include "Enumerator.h"


int Enumerator::getInd()
{
	return ind;
}

void Enumerator::setInd(int ind)
{
	this->ind = ind;
}

Task Enumerator::getTask()
{
	return u;
}

void Enumerator::first()
{
	ind = 0;
}

void Enumerator::next()
{
	ind += 1;
}

bool Enumerator::end()
{
	ind = 0;

	return false;
}

Task Enumerator::current()
{
	return u;
}
