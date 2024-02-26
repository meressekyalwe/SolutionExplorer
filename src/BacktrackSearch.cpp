
#include "BacktrackSearch.h"

BacktrackSearch::BacktrackSearch(AlgoTypes Algo)
{
	this->Algo = Algo;

	switch (this->Algo)
	{
	case AlgoTypes::DFS_Iterative:

		s = std::make_shared<DepthFirstLinSearch>();
		break;

	case AlgoTypes::DFS_Recursive:

		break;

	case AlgoTypes::Increasing:

		s = std::make_shared<IncreasingLinSearch>();

		break;
	}
}

void BacktrackSearch::run()
{
	s->run();
}

bool BacktrackSearch::found()
{
	return false;
}

std::shared_ptr<Task> BacktrackSearch::elem()
{
	return s->elem();
}
