
#include "IncreasingEnum.h"

void IncreasingEnum::first()
{
	ind = 0;

	c = false;

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

	c = true;

	while (c && (ind < u.n) && ind >= 0)
	{
		if (u.v[ind] < (u.m[ind] - 1))
		{
			u.v[ind] += 1;

			c = false;
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