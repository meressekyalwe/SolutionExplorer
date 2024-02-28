#pragma once
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"

template<TaskConcept T>
DepthFirstRecursiveLinSearch<T>::DepthFirstRecursiveLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstEnum<T>>(MyTask);

	this->t->first();
}

template<TaskConcept T>
void DepthFirstRecursiveLinSearch<T>::run()
{
	std::shared_ptr<T> u = this->t->getTask();

	u = this->t->current();

	bool l = (this->t->getInd() > u->n);

	if (l || this->t->end()) return;

	this->t->next();

	run();
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


