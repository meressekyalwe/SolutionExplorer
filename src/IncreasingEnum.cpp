#pragma once
#include "IncreasingEnum.h"

template<class T>
IncreasingEnum<T>::IncreasingEnum(T MysTask)
	: Enumerator<T>(MysTask)
{
	this->c = false;
}

template<class T>
void IncreasingEnum<T>::first()
{
	this->ind = 0;

	c = false;
}

template<class T>
void IncreasingEnum<T>::next()
{
	if (this->ind > this->u->n)
	{
		this->ind = this->u->n;
	}

	c = true;

	while (!c && (this->ind < this->u->n))
	{
		if (this->u->v[this->ind] < (this->u->m[this->ind] - 1))
		{
			this->u->v[this->ind] += 1;

			c = false;
		}
		else
		{
			this->u->v[this->ind] = 0;

			this->ind -= 1;
		}
	}
}

template<class T>
bool IncreasingEnum<T>::end()
{
	return c;
}

template<class T>
bool IncreasingEnum<T>::is_increasing()
{
	return true;
}