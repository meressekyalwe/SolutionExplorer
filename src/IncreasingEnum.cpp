
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
}

void IncreasingEnum::next()
{
	ind += 1;
	u.correct(ind);
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
