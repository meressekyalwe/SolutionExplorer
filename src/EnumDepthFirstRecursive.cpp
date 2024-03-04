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
	if ((this->ind <= this->u->n) && (this->u->rho(this->ind - 1)))
	{
		this->ind += 1;
	}
	else
	{
		if (this->ind > this->u->n)
		{
			this->ind -= 1;
		}

		while ((this->ind > 1) && (this->u->v[this->ind - 1] == this->u->m[this->ind - 1] - 1))
		{
			this->u->v[this->ind - 1] = 0;

			this->ind -= 1;
		}

		if (this->ind >= 1)
		{
			this->u->v[this->ind - 1] += 1;
		}
	}
}

template<TaskConcept T>
bool EnumDepthFirstRecursive<T>::end()
{
	return (this->ind == 0);
}

template<TaskConcept T>
bool EnumDepthFirstRecursive<T>::is_depthfirst_rec()
{
	return true;
}

template<TaskConcept T>
void EnumDepthFirstRecursive<T>::DFSUtil(int v)
{
	
}

template<TaskConcept T>
void EnumDepthFirstRecursive<T>::addEdge(int v, int w)
{
	
}