
#include "Enumerator.h"

template<class T>
Enumerator<T>::Enumerator(T MyTask)
{
	static_assert(std::is_base_of<Task, T>::value, "T must derive from Task");

	u = dynamic_cast<Task*>(MyTask);

	ind = 0;
}

template<class T>
int Enumerator<T>::getInd()
{
	return ind;
}

template<class T>
void Enumerator<T>::setInd(int ind)
{
	this->ind = ind;
}

template<class T>
std::shared_ptr<Task> Enumerator<T>::getTask()
{
	return u;
}

template<class T>
void Enumerator<T>::first()
{
	/**/
}

template<class T>
void Enumerator<T>::next()
{
	/**/
}

template<class T>
bool Enumerator<T>::end()
{
	return false;
}

template<class T>
std::shared_ptr<Task> Enumerator<T>::current()
{
	return u;
}
