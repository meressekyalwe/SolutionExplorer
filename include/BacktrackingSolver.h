#pragma once

/// <summary>
/// BacktrackingSolver Class
/// </summary>

#include <vector>
#include "Solver.h"



class BacktrackingSolver : public Solver
{
public:

	BacktrackingSolver();

	~BacktrackingSolver();

	/// <summary>
	/// Решать
	/// </summary>
	/// <param name="N"></param>
	/// <param name="col"></param>
	/// <returns></returns>
	bool Solve(size_t N, int col);

	/// <summary>
	/// Проверить если безопасно
	/// </summary>
	/// <param name="board"></param>
	/// <param name="index"></param>
	/// <param name="column"></param>
	/// <returns></returns>
	bool IsSafe(std::vector<std::vector<bool>> board, size_t index, size_t column);

protected:


private:

	/// <summary>
	/// board - таблица двухмерная
	/// </summary>
	std::vector<std::vector<bool>> board;

};