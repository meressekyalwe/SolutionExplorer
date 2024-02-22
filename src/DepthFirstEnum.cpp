
#include "DepthFirstEnum.h"

void DepthFirstEnum::first()
{
	ind = 0;
}

void DepthFirstEnum::next()
{
	ind += 1;
}

bool DepthFirstEnum::end()
{
	return false;
}