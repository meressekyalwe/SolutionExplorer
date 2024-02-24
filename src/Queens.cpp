
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

	int j = 0;

	while ((l == false) && (j < n))
	{
		if (safe(i - 1, j))
		{
			board[(i - 1) + (n * j)] = true;

			l = true;
		}

		j += 1;
	}

	return l;
}

bool Queens::safe(int col, int row)
{
	for (int i = 0; i < col; i++)
	{
		if (board[row][i]) return false;
	}
		

	return false;
}