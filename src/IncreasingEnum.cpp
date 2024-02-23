
#include "IncreasingEnum.h"
#include "Task.h"

void IncreasingEnum::first()
{
	c = false;
	ind = 0;

	u.v.resize(u.n);
	for (auto& tmp : u.v)
	{
		tmp = 0;
	}

	u.m.resize(u.n);
	for (auto& tmp : u.m)
	{
		tmp = 0;
	}
}

void IncreasingEnum::next()
{
	if (ind > u.n)
	{
		ind = u.n;
	}

	c = 1;

	while (c = 1 && ind <= u.n)
	{
		if (u.v[ind] < (u.m[ind] - 1))
		{
			u.v[ind] += 1;

			c = 0;
		}
		else
		{
			u.v[ind] = 0;

			ind -= 1;
		}
	}
}

bool IncreasingEnum::end()
{
	return c;
}

bool IncreasingEnum::is_increasing()
{
	return true;
}

Task IncreasingEnum::current()
{
	return u;
}