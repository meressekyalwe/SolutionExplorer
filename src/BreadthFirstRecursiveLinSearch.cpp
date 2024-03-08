#pragma once
#include "BreadthFirstRecursiveLinSearch.h"

template<TaskConcept T>
BreadthFirstRecursiveLinSearch<T>::BreadthFirstRecursiveLinSearch(T MysTask)
	: LinearSearch<T>(MysTask)
{
	this->t = std::make_shared<BreadthFirstRecursiveEnum<T>>(MysTask);
}

template<TaskConcept T>
void BreadthFirstRecursiveLinSearch<T>::run()
{
	bool l = false;

	std::shared_ptr<T> u = nullptr;

	this->t->start();

	while (!l && (!this->t->end()))
	{
		u = this->t->current();

		std::pair<bool, int> p = u->correct(this->t->getInd());

		l = p.first;

		int ind = p.second;

		this->t->setInd(ind);

		this->t->next();
	}
}

template<TaskConcept T>
std::shared_ptr<T> BreadthFirstRecursiveLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool BreadthFirstRecursiveLinSearch<T>::cond()
{
	return this->t->end();
}

