#pragma once

#include "LinearSearch.h"
#include "IncreasingEnum.h"

class IncreasingLinSearch : public LinearSearch
{
public:
	
	/// <summary>
	/// 
	/// </summary>
	void run() override;

//protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	Task* elem() override;
	
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond() override;

private:

	/// <summary>
	/// 
	/// </summary>
	IncreasingEnum t;
};