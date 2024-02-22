#pragma once

#include "Enumerator.h"
#include "LinearSearch.h";
#include "Task.h"


/// <summary>
/// 
/// </summary>
class BacktrackSearch
{
public:

	/// <summary>
	/// 
	/// </summary>
	void run();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool found();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task elem();

protected:
	
	/// <summary>
	/// 
	/// </summary>
	Enumerator t;

	/// <summary>
	/// 
	/// </summary>
	LinearSearch s;
};
