#pragma once

#include "Task.h"

class Queens : public Task
{
public:

	/// <summary>
	/// 
	/// </summary>
	//Queens(size_t n);

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
	bool safe(int row, int col);

	/// <summary>
	/// 
	/// </summary>
	void print();

	/// <summary>
	/// 
	/// </summary>
	std::vector<std::vector<bool>> board;
};
