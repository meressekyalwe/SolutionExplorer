#pragma once

#include "Enumerator.h"

template<TaskConcept T>
class EnumDepthFirstRecursive : public Enumerator<T>
{
public:

	EnumDepthFirstRecursive(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void start() override;

	/// <summary>
	/// 
	/// </summary>
	void next() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool end() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool is_depthfirst_rec();

};

#include "EnumDepthFirstRecursive.cpp"