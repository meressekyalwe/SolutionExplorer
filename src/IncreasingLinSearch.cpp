#pragma once
#include "IncreasingLinSearch.h"
#include <iostream>

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
// omp parallel
	while (!l && (!this->t->end()))
	{
		std::shared_ptr<T> u = this->t->current();

		std::pair<bool, int> p = u->correct(this->t->getInd());

		l = p.first;

		int ind = p.second;

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

