#pragma once
//https://www.youtube.com/watch?v=xFv_Hl4B83A
#include "Queens.h"
#include <iostream>


//Queens::Queens(size_t n)
//{
//	this->n = n;
//
//	board.resize(n);
//
//	for (auto& b : board)
//	{
//		b.resize(n);
//	}
//
//	this->v.resize(n);
//
//	this->m.resize(n);
//}

bool Queens::rho(int i)
{
	bool l = false;

	int j = 0;

	while ((j < 4) && !l)
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

	m[i] = n;

	print();

	return l;
}

bool Queens::safe(int row, int col)
{
	int i, j;

	// Check this row on left side
	for (i = 0; i < col; i++)
	{
		if (board[row][i]) return false;
	}
		
	// Check upper diagonal on left side
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if (board[i][j]) return false;
	}
		
	// Check lower diagonal on left side
	for (i = row, j = col; j >= 0 && i < this->n; i++, j--)
	{
		if (board[i][j]) return false;
	}
		
	return true;
}

void Queens::print()
{
	for (int k = 0; k < n; k++)
	{
		for (int l = 0; l < n; l++)
		{
			std::cout << board[k][l] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}