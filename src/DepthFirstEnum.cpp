
#include "DepthFirstEnum.h"
#include <iostream>

void DepthFirstEnum::first()
{
	u.Initialize();

	(u.n < 1 ? ind = 0 : ind = 1);
}

void DepthFirstEnum::next()
{
	if ((ind <= u.n) && (u.rho(ind)))
	{
		ind += 1;
	}
	else
	{
		if (ind > u.n)
		{
			ind -= 1; 
		}

		while ((ind >= 1) && (u.v[ind - 1] == u.m[ind - 2]))
		{
			u.v[ind - 1] = 0;

			ind -= 1;
		}

		if (ind >= 1)
		{
			u.v[ind - 1] += 1;
		}
	}
}

bool DepthFirstEnum::end()
{
	return (ind == 0);
}

bool DepthFirstEnum::is_depthfirst()
{
	return true;
}