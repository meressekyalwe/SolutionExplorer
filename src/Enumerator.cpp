
#include "Enumerator.h"

Enumerator::Enumerator()
{
	u = std::make_shared<Task>();
}

int Enumerator::getInd()
{
	return ind;
}

void Enumerator::setInd(int ind)
{
	this->ind = ind;
}

std::shared_ptr<Task> Enumerator::getTask()
{
	return u;
}

void Enumerator::first()
{

}

void Enumerator::next()
{

}

bool Enumerator::end()
{
	return false;
}

std::shared_ptr<Task> Enumerator::current()
{
	return u;
}
