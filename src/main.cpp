
#include "BacktrackSearch.h"
#include <iostream>

class Problem
{
public:

	int n = 4;

	std::vector<int> v = { 0, 0, 0, 0 };

	std::vector<int> m = { 4, 4, 4, 4 };

	bool rho(int i);

	bool correct(int& ind);


	bool board[4][4] = { { 0, 0, 0, 0 },
					     { 0, 0, 0, 0 },
					     { 0, 0, 0, 0 },
					     { 0, 0, 0, 0 } };

	bool safe(int row, int col);


	void print();
};

bool Problem::rho(int i)
{
	bool l = false;

	int j = 0;

	while ((j < n) && !l)
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

	print();

	return l;
}

bool Problem::correct(int& ind)
{
	bool l = true;

	int i = ind;

	while (l && i <= n)
	{
		l = rho(i);

		i += 1;
	}

	ind = i - 1;

	return l;
}

bool Problem::safe(int row, int col)
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
	for (i = row, j = col; j >= 0 && i < n; i++, j--)
		if (board[i][j])
			return false;

	return true;
}

void Problem::print()
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


int main()
{
	Problem P;

	BacktrackSearch<Problem> B(AlgoTypes::DFS_Recursive, P);

	B.run();

	return 0;
}