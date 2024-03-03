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


	recur();
}


