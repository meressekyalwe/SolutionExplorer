#pragma once

#include <vector>

/// <summary>
/// 
/// </summary>
class Task
{
public:

	/// <summary>
	/// decides whether the current element of the problem space satisfies the statement rho(f(u:v)) or does not.
	/// </summary>
	/// <param name="ind"></param>
	/// <returns></returns>
	bool correct(int ind);


	/// <summary>
	/// 
	/// </summary>
	/// <param name="i"></param>
	/// <returns></returns>
	virtual bool rho(int i);

	/// <summary>
	/// 
	/// </summary>
	int n = 0;

	/// <summary>
	/// contains one element of the set of D
	/// </summary>
	std::vector <int> v;

	/// <summary>
	/// 
	/// </summary>
	std::vector <int> m;
};