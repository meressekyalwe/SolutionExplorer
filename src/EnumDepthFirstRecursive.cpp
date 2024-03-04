#pragma once

#include "EnumDepthFirstRecursive.h"


template<TaskConcept T>
EnumDepthFirstRecursive<T>::EnumDepthFirstRecursive(T MyTask)
	: Enumerator<T>(MyTask)
{
	/**/
}

template<TaskConcept T>
void EnumDepthFirstRecursive<T>::start()
{
	(this->u->n < 1 ? this->ind = 0 : this->ind = 1);
}

template<TaskConcept T>
void EnumDepthFirstRecursive<T>::next()
{

}

template<TaskConcept T>
bool EnumDepthFirstRecursive<T>::end()
{
	return false;
}

template<TaskConcept T>
bool EnumDepthFirstRecursive<T>::is_depthfirst_rec()
{
	return true;
}