#pragma once

#include "Task.h"

constexpr size_t N = 4;

class Queens : public Task
{
public:

	/// <summary>
	/// 
	/// </summary>
	Queens();

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
};
