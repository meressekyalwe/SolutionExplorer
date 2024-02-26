
#include "BacktrackSearch.h"
#include <iostream>

void BacktrackSearch::run(AlgoTypes algo)
{
	this->algo = algo;

	std::cout << "Start running !" << std::endl;

	if (this->algo == AlgoTypes::DepthFirst)
	{
		s1.run();
	}
	else if (this->algo == AlgoTypes::Increasing)
	{
		s2.run();
	}
}

bool BacktrackSearch::found()
{
	Task* u;

	if (this->algo == AlgoTypes::DepthFirst)
	{
		u = s1.elem();
	}
	else if (this->algo == AlgoTypes::Increasing)
	{
		u = s2.elem();
	}

	if (u->v.size() == u->n)
	{
		for (const auto temp : u->v) std::cout << temp << " ";
	}

	return (u->v.size() == u->n);
}

Task BacktrackSearch::elem()
{
	return Task();
}
