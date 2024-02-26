
#include "Task.h"


bool Task::correct(int ind)
{
	bool l = false;

	int i = ind;

	while (!l && (i <= n))
	{
		l = true; rho(i);

		i += 1;
	}

	ind = i - 1;

	return l;
}

bool Task::rho(int i)
{
	return false;
}


