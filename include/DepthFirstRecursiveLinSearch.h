
#pragma once

#include "LinearSearch.h"

/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
template<TaskConcept T>
class DepthFirstRecursiveLinSearch : public LinearSearch<T>
{
public:

	/// <summary>
	/// 
	/// </summary>
	/// <param name="MyTask"></param>
	DepthFirstRecursiveLinSearch(T MyTask);


	/// <summary>
	/// 
	/// </summary>
	void run();


	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<T> elem();


protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond();

	/// <summary>
	/// 
	/// </summary>
	void recur(std::shared_ptr<T> u, bool l);
};

#include "DepthFirstRecursiveLinSearch.cpp"