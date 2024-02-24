#pragma once

#include "Task.h"

class Queens : public Task
{
public:


	void Initialize();

	/// <summary>
	/// 
	/// </summary>
	/// <param name="i"></param>
	/// <returns></returns>
	bool rho(int i) override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool safe(int col, int row);

private:

	/// <summary>
	/// 
	/// </summary>
	std::vector<bool>board;
};
