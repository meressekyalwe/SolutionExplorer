#pragma once
#include "Enumerator.h"

template<class T>
Enumerator<T>::Enumerator(T MyTask)
{
	this->u = std::make_shared<Task>();

	//this->u = dynamic_cast<Task>(MyTask);

	this->ind = 0;
}

template<class T>
int Enumerator<T>::getInd()
{
	return this->ind;
}

template<class T>
void Enumerator<T>::setInd(int ind)
{
	this->ind = ind;
}

template<class T>
std::shared_ptr<Task> Enumerator<T>::getTask()
{
	return this->u;
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
	return this->u;
}
