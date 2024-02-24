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
	virtual void run() = 0;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	//virtual bool found() = 0;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual Task* elem() = 0;

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool cond() = 0;
};