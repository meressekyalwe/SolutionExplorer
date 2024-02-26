
#include "IncreasingLinSearch.h"

IncreasingLinSearch::IncreasingLinSearch()
	: LinearSearch()
{
	t = std::make_shared<IncreasingEnum>();
}

void IncreasingLinSearch::run()
{
	bool l = false;

	t->first();

	if (!l && !t->end())
	{
		auto u = t->getTask();

		l = u->correct(t->getInd());

		//auto ind = t.getInd();

		//t.setInd(ind);

		t->next();
	}
}

std::shared_ptr<Task> IncreasingLinSearch::elem()
{
	return t->getTask();
}

bool IncreasingLinSearch::cond()
{
	return t->end();
}

