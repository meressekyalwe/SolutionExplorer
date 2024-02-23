
#include "DepthFirstLinSearch.h"

void DepthFirstLinSearch::run()
{
	bool l = false;

	t.first();

	while (!l && !t.end())
	{
		auto u = t.getTask();

		u = t.current();

		l = t.getInd() > u.n;

		t.next();
	}
}

bool DepthFirstLinSearch::cond()
{

	return false;
}