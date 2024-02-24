#pragma once

//#include "Task.h"
#include "Queens.h"

/// <summary>
/// 
/// </summary>
class Enumerator
{
public:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	int getInd();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="ind"></param>
	void setInd(int ind);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task* getTask();

	/// <summary>
	/// 
	/// </summary>
	virtual void first() = 0;

	/// <summary>
	/// 
	/// </summary>
	virtual void next() = 0;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool end() = 0;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task* current();

protected:

	/// <summary>
	/// 
	/// </summary>
	int ind = 0;

	/// <summary>
	/// 
	/// </summary>
	Queens u;
};
