#pragma once
#include "BacktrackSearch.h"
#include <iostream>
#include <concepts>

template<class T>
BacktrackSearch<T>::BacktrackSearch(AlgoTypes Algo, T MyTask)
{
	std::cout << "Hi" << std::endl;

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

template<class T>
void BacktrackSearch<T>::run()
{
	this->s->run();
}

template<class T>
bool BacktrackSearch<T>::found()
{
	return false;
}

template<class T>
std::shared_ptr<Task> BacktrackSearch<T>::elem()
{
	return this->s->elem();
}
