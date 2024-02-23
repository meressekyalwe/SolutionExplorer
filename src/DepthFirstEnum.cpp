
#include "DepthFirstEnum.h"

void DepthFirstEnum::first()
{
	ind = 1;

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

void DepthFirstEnum::next()
{
	if ((ind <= u.n) && (u.rho(ind)))
	{
		if (ind > u.n)
		{
			ind - 1;
		}

		while ((ind >= 1) && (u.v[ind] = u.m[ind - 1]))
		{
			u.v[ind] = 0;

			ind -= 1;
		}

		if (ind >= 1)
		{
			u.v[ind] += 1;
		}

		ind += 1;
	}
}

bool DepthFirstEnum::end()
{
	return (ind == u.n);
}

bool DepthFirstEnum::is_depthfirst()
{
	return true;
}