
#include "LinearSearch.h"

template<class T>
LinearSearch<T>::LinearSearch(T MyTask)
{
	this->t = std::make_shared<Enumerator<T>>(MyTask);
}

template<class T>
void LinearSearch<T>::run()
{
	/**/
}

template<class T>
bool LinearSearch<T>::found()
{
	return false;
}

template<class T>
std::shared_ptr<Task> LinearSearch<T>::elem()
{
	return this->t->getTask();
}

template<class T>
bool LinearSearch<T>::cond()
{
	return false;
}