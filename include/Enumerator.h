#pragma once

#include <memory>
#include <cassert>
#include "Task.h"

/// <summary>
/// 
/// </summary>

template<class T>
concept TaskConcept = requires(T t)
{
	{ t.rho() } -> std::convertible_to<bool>;
};

template<TaskConcept T>
class Enumerator
{
public:

	/// <summary>
	/// 
	/// </summary>
	Enumerator(T MyTask);

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

//protected:

	/// <summary>
	/// 
	/// </summary>
	int ind;

	/// <summary>
	/// 
	/// </summary>
	std::shared_ptr<TaskConcept> u;
};

#include "Enumerator.cpp"