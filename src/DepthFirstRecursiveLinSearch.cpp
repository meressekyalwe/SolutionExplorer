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

	recur();
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
void DepthFirstRecursiveLinSearch<T>::recur()
{
	std::shared_ptr<T> u = this->t->getTask();

	u = this->t->current();

	bool l = (this->t->getInd() > u->n);

	if (l || this->t->end()) return;

	this->t->next();

	recur();
}


