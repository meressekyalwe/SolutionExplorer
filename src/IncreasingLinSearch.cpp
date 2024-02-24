
#include "IncreasingLinSearch.h"

void IncreasingLinSearch::run()
{
	bool l = false;

	t.first();

	while ((l == false) && !t.end())
	{
		auto u = t.getTask();

		l = u.correct(t.getInd());

		auto ind = t.getInd();

		t.setInd(ind);

		t.next();
	}
}

Task IncreasingLinSearch::elem()
{
	return t.getTask();
}

bool IncreasingLinSearch::cond()
{
	return false;
}

