
#include "DepthFirstEnum.h"
#include <iostream>

template<class T>
DepthFirstEnum<T>::DepthFirstEnum(T MyTask)
	: Enumerator<T>(MyTask)
{
	static_assert(std::is_base_of<Task, T>::value, "T must derive from Task");
}

template<class T>
void DepthFirstEnum<T>::first()
{
	(this->u->n < 1 ? this->ind = 0 : this->ind = 1);
}

template<class T>
void DepthFirstEnum<T>::next()
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

		while ((this->ind >= 1) && (this->u->v[this->ind - 1] == this->u->m[this->ind - 2]))
		{
			this->u->v[this->ind] = 0;

			this->ind -= 1;
		}

		if (this->ind >= 1)
		{
			this->u->v[this->ind] += 1;
		}
	}
}

template<class T>
bool DepthFirstEnum<T>::end()
{
	return (this->ind == 0);
}

template<class T>
bool DepthFirstEnum<T>::is_depthfirst()
{
	return true;
}