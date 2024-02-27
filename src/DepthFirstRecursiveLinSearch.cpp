
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"

template<class T>
DepthFirstRecursiveLinSearch<T>::DepthFirstRecursiveLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	this->t = std::make_shared<DepthFirstEnum>(MyTask);
}