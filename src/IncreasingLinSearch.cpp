
#include "IncreasingLinSearch.h"

template<class T>
IncreasingLinSearch<T>::IncreasingLinSearch(T MysTask)
	: LinearSearch<T>(MysTask)
{
	static_assert(std::is_base_of<Task, T>::value, "T must derive from Task");

	this->t = std::make_shared<IncreasingEnum>(MysTask);
}

template<class T>
void IncreasingLinSearch<T>::run()
{
	bool l = false;

	this->t->first();

	if (!l && !this->t->end())
	{
		auto u = this->t->getTask();

		l = u->correct(this->t->getInd());

		//auto ind = t.getInd();

		//t.setInd(ind);

		this->t->next();
	}
}

template<class T>
std::shared_ptr<Task> IncreasingLinSearch<T>::elem()
{
	return this->t->getTask();
}

template<class T>
bool IncreasingLinSearch<T>::cond()
{
	return this->t->end();
}

