#pragma once
#include "IncreasingEnum.h"

template<TaskConcept T>
IncreasingEnum<T>::IncreasingEnum(T MysTask)
	: Enumerator<T>(MysTask)
{
	c = false;
}

template<TaskConcept T>
void IncreasingEnum<T>::start()
{
	this->ind = 0;

	c = false;
}

template<TaskConcept T>
void IncreasingEnum<T>::next()
{
	c = true;

	while (c && (this->ind <= this->u->n))
	{
		if ((this->u->v[this->ind]) < (this->u->m[this->ind] - 1))
		{
			this->u->v[this->ind] += 1;

			c = false;

			assert(this->ind >= 0);
		}
		else 
		{
			this->u->v[this->ind] = 0;

			if (this->ind > 0) this->ind -= 1;

			assert(this->ind >= 0);
		}	
	}

	assert(this->ind < this->u->n);
}

template<TaskConcept T>
bool IncreasingEnum<T>::end()
{
	return c;
}

template<TaskConcept T>
bool IncreasingEnum<T>::is_increasing()
{
	return true;
}