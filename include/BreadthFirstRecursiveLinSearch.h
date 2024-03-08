#pragma once

#include "LinearSearch.h"
#include "BreadthFirsRecursiveEnum.h"

template<TaskConcept T>
class BreadthFirstRecursiveLinSearch : public LinearSearch<T>
{
public:

	BreadthFirstRecursiveLinSearch(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void run() override;

	//protected:

		/// <summary>
		/// 
		/// </summary>
		/// <returns></returns>
	std::shared_ptr<T> elem() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond() override;

};

#include "BreadthFirstRecursiveLinSearch.cpp"