
#include "IncreasingLinSearch.h"

void IncreasingLinSearch::run()
{
	bool l = false;

	t.first();

	while (!l && !t.end())
	{
		auto u = t.getTask();

		l = u.correct(t.getInd());

		t.setInd(ind);

		t.next();
	}
}

bool IncreasingLinSearch::cond()
{
	return false;
}