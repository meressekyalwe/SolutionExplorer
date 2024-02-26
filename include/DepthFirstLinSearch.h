#pragma once

#include "LinearSearch.h"
#include "DepthFirstEnum.h"

/// <summary>
/// 
/// </summary>
class DepthFirstLinSearch : public LinearSearch
{
public:

	DepthFirstLinSearch();

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