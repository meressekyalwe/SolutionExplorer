
#include "DepthFirstLinSearch.h"

void DepthFirstLinSearch::run()
{
	bool l = false;

	t.first();

	while ((l == false) && !t.end())
	{
		auto u = t.getTask();

		u = t.current();

		l = (t.getInd() > u->n);

		t.next();
	}
}

Task* DepthFirstLinSearch::elem()
{
	return t.getTask();
}

bool DepthFirstLinSearch::cond()
{
	return false;
}