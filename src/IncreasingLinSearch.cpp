#pragma once
#include "IncreasingLinSearch.h"

template<TaskConcept T>
IncreasingLinSearch<T>::IncreasingLinSearch(T MysTask)
	: LinearSearch<T>(MysTask)
{
	this->t = std::make_shared<IncreasingEnum<T>>(MysTask);
}

template<TaskConcept T>
void IncreasingLinSearch<T>::run()
{
	bool l = false;

	this->t->first();

	if ((!l) && (!this->t->end()))
	{
		auto u = this->t->current();

		int ind = this->t->getInd();

		l = u->correct(ind);

		ind = this->t->getInd();

		this->t->setInd(ind);

		this->t->next();
	}
}

template<TaskConcept T>
std::shared_ptr<T> IncreasingLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool IncreasingLinSearch<T>::cond()
{
	return this->t->end();
}

