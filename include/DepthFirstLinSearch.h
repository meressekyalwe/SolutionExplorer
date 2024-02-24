#pragma once

#include "LinearSearch.h"
#include "DepthFirstEnum.h"

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

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task* elem() override;

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond();

private:

	/// <summary>
	/// 
	/// </summary>
	DepthFirstEnum t;
};