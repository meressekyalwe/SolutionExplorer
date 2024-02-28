#pragma once

#include "LinearSearch.h"
#include "DepthFirstEnum.h"

/// <summary>
/// 
/// </summary>
template<class T>
class DepthFirstLinSearch : public LinearSearch<T>
{
public:

	DepthFirstLinSearch(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void run() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<Task> elem() override;

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond();
};

#include "DepthFirstLinSearch.cpp"