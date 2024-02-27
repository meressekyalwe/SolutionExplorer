
#include "DepthFirstLinSearch.h"

template<class T>
DepthFirstLinSearch<T>::DepthFirstLinSearch(T MyTask)
	: LinearSearch<T>(MyTask)
{
	static_assert(std::is_base_of<Task, T>::value, "T must derive from Task");

	this->t = std::make_shared<DepthFirstEnum<T>>(MyTask);
}

template<class T>
void DepthFirstLinSearch<T>::run()
{
	bool l = false;

	this->t->first();

	while (!l && !this->t->end())
	{
		std::shared_ptr<Task> u = this->t->getTask();

		u = this->t->current();

		l = (this->t->getInd() > u->n);

		this->t->next();
	}
}

template<class T>
std::shared_ptr<Task> DepthFirstLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<class T>
bool DepthFirstLinSearch<T>::cond()
{
	return false;
}