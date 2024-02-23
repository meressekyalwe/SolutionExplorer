
#include "BacktrackSearch.h"

void BacktrackSearch::run(AlgoTypes algo)
{
	if (algo == AlgoTypes::DepthFirst)
	{
		s1.run();
	}
	else if (algo == AlgoTypes::Increasing)
	{
		s2.run();
	}
}

bool BacktrackSearch::found()
{
	return false;
}

Task BacktrackSearch::elem()
{
	return Task();
}
