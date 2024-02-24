#pragma once

#include "IncreasingLinSearch.h"
#include "DepthFirstLinSearch.h"


/// <summary>
/// 
/// </summary>
enum AlgoTypes
{
	DepthFirst = 1,
	Increasing = 2
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
	void run(AlgoTypes algo);

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	bool found();

	/// <summary>
	/// gives the result of the search.
	/// </summary>
	/// <returns></returns>
	Task elem();

protected:

	/// <summary>
	/// 
	/// </summary>
	DepthFirstLinSearch s1;

	/// <summary>
	/// 
	/// </summary>
	IncreasingLinSearch s2;

private:

	/// <summary>
	/// 
	/// </summary>
	AlgoTypes algo;
};
