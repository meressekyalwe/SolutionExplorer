#pragma once

#include "LinearSearch.h"

/// <summary>
/// 
/// </summary>
class DepthFirstLinSearch : public LinearSearch
{
public:

	/// <summary>
	/// 
	/// </summary>
	void run() override;

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond();
};