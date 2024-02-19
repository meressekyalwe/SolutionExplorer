#pragma once

#include <vector>


/// <summary>
/// 
/// </summary>
class Task
{
public:

	bool correct(int ind);

	virtual bool rho(int i);

	int n;

	std::vector <int> v;

	std::vector <int> m;
};