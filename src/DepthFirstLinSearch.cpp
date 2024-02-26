
#include "DepthFirstLinSearch.h"

DepthFirstLinSearch::DepthFirstLinSearch()
	: LinearSearch()
{
	t = std::make_shared<DepthFirstEnum>();
}

void DepthFirstLinSearch::run()
{
	bool l = false;

	t->first();

	while (!l && !t->end())
	{
		std::shared_ptr<Task> u = t->getTask();

		u = t->current();

		l = (t->getInd() > u->n);

		t->next();
	}
}

std::shared_ptr<Task> DepthFirstLinSearch::elem()
{
	return t->getTask();
}

bool DepthFirstLinSearch::cond()
{
	return false;
}