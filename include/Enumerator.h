#pragma once

#include "Task.h"

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
	Task getTask();

	/// <summary>
	/// 
	/// </summary>
	virtual void first();

	/// <summary>
	/// 
	/// </summary>
	virtual void next();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool end();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task current();

protected:

	/// <summary>
	/// 
	/// </summary>
	int ind;

	/// <summary>
	/// 
	/// </summary>
	Task u;
};
