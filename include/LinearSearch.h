#pragma once

#include "Enumerator.h"


/// <summary>
/// 
/// </summary>
class LinearSearch
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
	/// <returns></returns>
	virtual bool cond();

	/// <summary>
	/// 
	/// </summary>
	Enumerator t;
};