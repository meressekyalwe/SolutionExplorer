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
	this->t->first();

	std::shared_ptr<T> u = nullptr;

	bool l = false;

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
	if (this->t->end())
	{
		return;
	}

	u = this->t->current();
		
	l = (this->t->getInd() > u->n);

	this->t->next();

	if (!l)
	{
		recur(u, l);
	}
}


