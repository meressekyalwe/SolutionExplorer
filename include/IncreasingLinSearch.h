#pragma once

#include "LinearSearch.h"

class IncreasingLinSearch : public LinearSearch
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