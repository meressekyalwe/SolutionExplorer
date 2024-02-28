
#pragma once

#include "LinearSearch.h"

template<TaskConcept T>
class DepthFirstRecursiveLinSearch : public LinearSearch<T>
{
public:

	DepthFirstRecursiveLinSearch(T MyTask);


protected:


};

#include "DepthFirstRecursiveLinSearch.cpp"