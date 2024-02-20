
#include "Task.h"

Task::Task(int n)
{
	this->n = n;
}

bool Task::correct(int& ind)
{
	bool l = true;

	for (int i = ind; i < n; i++)
	{
		l = rho(i);
	}

	ind = i - 1;

	return l;
}

bool Task::rho(int i)
{
	return false;
}


