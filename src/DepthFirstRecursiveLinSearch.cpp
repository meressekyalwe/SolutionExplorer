#pragma once
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"

template<TaskConcept T>
DepthFirstRecursiveLinSearch<T>::DepthFirstRecursiveLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstEnum<T>>(MyTask);
}

template<TaskConcept T>
void DepthFirstRecursiveLinSearch<T>::run()
{
	bool l = false;

	std::shared_ptr<T> u = nullptr;

	this->t->start();

	recur(u, l);
}

template<TaskConcept T>
std::shared_ptr<T> DepthFirstRecursiveLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<TaskConcept T>
bool DepthFirstRecursiveLinSearch<T>::cond()
{
	return false;
}

template<TaskConcept T>
void DepthFirstRecursiveLinSearch<T>::recur(std::shared_ptr<T> u, bool l)
{
	u = this->t->current();

	l = (this->t->getInd() > u->n);

	if ((!l && !this->t->end()))
	{
		this->t->next();

		recur(u, l);
	}
}


