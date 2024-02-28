#pragma once
#include "BacktrackSearch.h"
#include <iostream>

template<TaskConcept T>
BacktrackSearch<T>::BacktrackSearch(AlgoTypes Algo, T MyTask)
{
	this->Algo = Algo;

	switch (this->Algo)
	{
	case AlgoTypes::DFS_Iterative:

		this->s = std::make_shared<DepthFirstLinSearch<T>>(MyTask);

		break;

	case AlgoTypes::Increasing:

		this->s = std::make_shared<IncreasingLinSearch<T>>(MyTask);

		break;

	default:

		this->s = std::make_shared<LinearSearch<T>>(MyTask);
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
