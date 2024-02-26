#pragma once

#include "LinearSearch.h"
#include "IncreasingEnum.h"

class IncreasingLinSearch : public LinearSearch
{
public:
	
	IncreasingLinSearch();

	/// <summary>
	/// 
	/// </summary>
	void run() override;

//protected:

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	std::shared_ptr<Task> elem() override;
	
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool cond() override;

};