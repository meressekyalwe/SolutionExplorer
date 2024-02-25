
#include "Queens.h"

void Queens::Initialize()
{
	n = 4;

	board.resize(n * n);

	for (auto temp : board)
	{
		temp = false;
	}
}

bool Queens::rho(int i)
{
	bool l = false;

	return l;
}

bool Queens::safe(int row, int col)
{
	// Check this row on left side
	for (int i = 0; i < col; i++)
	{
		if (board[(n * row) + i]) return false;
	}
		
	// Check upper diagonal on left side
	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if (board[(n * i) + j]) return false;
	}
	
	// Check lower diagonal on left side
	for (int i = row, j = col; j >= 0 && i < n; i++, j--)
	{
		if (board[(n * i) + j]) return false;
	}
		
	return true;
}