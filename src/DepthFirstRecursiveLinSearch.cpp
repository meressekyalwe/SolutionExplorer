#pragma once
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"

template<TaskConcept T>
DepthFirstRecursiveLinSearch<T>::DepthFirstRecursiveLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstEnum>(MyTask);
}