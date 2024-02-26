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
	LinearSearch();

	/// <summary>
	/// 
	/// </summary>
	virtual void run();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool found();

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual std::shared_ptr<Task> elem();

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	virtual bool cond();

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<Enumerator> t;
};