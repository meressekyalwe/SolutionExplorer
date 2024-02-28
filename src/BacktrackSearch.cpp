#pragma once
#include "BacktrackSearch.h"

template<TaskConcept T>
BacktrackSearch<T>::BacktrackSearch(AlgoTypes Algo, T MyTask)
{
	this->Algo = Algo;

	switch (this->Algo)
	{
	case AlgoTypes::DFS_Iterative:

		this->s = std::make_shared<DepthFirstLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::DFS_Recursive:

		this->s = std::make_shared<DepthFirstRecursiveLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::Increasing:

		this->s = std::make_shared<IncreasingLinSearch<T>>(MyTask);

		break;

	default:

		this->s = nullptr;
	}
}

template<TaskConcept T>
void BacktrackSearch<T>::run()
{
	this->s->run();
}

template<TaskConcept T>
bool BacktrackSearch<T>::found()
{
	return false;
}

template<TaskConcept T>
std::shared_ptr<T> BacktrackSearch<T>::elem()
{
	return this->s->elem();
}
