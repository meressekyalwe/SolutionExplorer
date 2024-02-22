
#include "DepthFirstEnum.h"

void DepthFirstEnum::first()
{
	ind = 1;

	u.v.resize(u.n);
	for (auto& tmp : u.v)
	{
		tmp = 0;
	}
}

void DepthFirstEnum::next()
{
	ind += 1;
}

bool DepthFirstEnum::end()
{
	return false;
}