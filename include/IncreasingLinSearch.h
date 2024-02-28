#pragma once

#include "LinearSearch.h"
#include "IncreasingEnum.h"

template<TaskConcept T>
class IncreasingLinSearch : public LinearSearch<T>
{
public:
	
	IncreasingLinSearch(T MyTask);

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

#include "IncreasingLinSearch.cpp"