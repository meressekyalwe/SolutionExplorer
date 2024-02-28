#pragma once

#include "Enumerator.h"


/// <summary>
/// 
/// </summary>
template<class T>
class LinearSearch
{
public:

	/// <summary>
	/// 
	/// </summary>
	LinearSearch(T MysTask);

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
	std::shared_ptr<Enumerator<T>> t;
};

#include "LinearSearch.cpp"