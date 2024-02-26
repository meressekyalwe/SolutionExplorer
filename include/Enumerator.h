#pragma once

#include <memory>
#include "Task.h"

/// <summary>
/// 
/// </summary>
class Enumerator
{
public:

	Enumerator();

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
	std::shared_ptr<Task> getTask();

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
	std::shared_ptr<Task> current();

protected:

	/// <summary>
	/// 
	/// </summary>
	int ind = 0;

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<Task> u;
};
