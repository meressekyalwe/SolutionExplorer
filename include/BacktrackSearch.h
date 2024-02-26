#pragma once

#include "IncreasingLinSearch.h"
#include "DepthFirstLinSearch.h"


/// <summary>
/// 
/// </summary>
enum AlgoTypes
{
	DFS_Iterative = 1,
	DFS_Recursive = 2,
	Increasing = 3
};


/// <summary>
/// 
/// </summary>
class BacktrackSearch
{
public:

	/// <summary>
	/// 
	/// </summary>
	BacktrackSearch(AlgoTypes Algo);

	/// <summary>
	/// 
	/// </summary>
	void run();

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	bool found();

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<Task> elem();

protected:

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<LinearSearch> s;

private:

	/// <summary>
	/// 
	/// </summary>
	AlgoTypes Algo;
};
