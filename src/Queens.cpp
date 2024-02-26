
#include "Queens.h"
#include <iostream>
#include <cstdio>

/// <summary>
/// 
/// </summary>
bool board[N][N] = { { 0, 0, 0, 0 },
					 { 0, 0, 0, 0 },
					 { 0, 0, 0, 0 },
					 { 0, 0, 0, 0 } };

void Queens::Initialize()
{
	n = N;

	this->v.resize(this->n);
	for (auto& tmp : this->v)
	{
		tmp = 0;
	}

	this->m.resize(this->n);
	for (auto& tmp : this->m)
	{
		tmp = 0;
	}
}

bool Queens::rho(int i)
{
	i -= 1;

	bool l = false;

	int j = 0;

	while ((j < 4) && (l == false))
	{
		if (safe(j, i))
		{
			board[j][i] = true;

			l = true;
		}
		else
		{
			board[j][i] = false;
		}

		j += 1;
	}

	for (int k = 0; k < n; k++)
	{
		for (int l = 0; l < n; l++)
		{
			std::cout << board[k][l] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;

	return l;
}

bool Queens::safe(int row, int col)
{
	int i, j;

	// Check this row on left side
	for (i = 0; i < col; i++)
		if (board[row][i])
			return false;

	// Check upper diagonal on left side
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	// Check lower diagonal on left side
	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;
	return true;
}