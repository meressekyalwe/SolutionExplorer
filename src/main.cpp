
#include "BacktrackSearch.h"
#include <iostream>

class Problem
{
public:

	int n = 8;

	std::vector<int> v = { 0, 0, 0, 0, 0, 0, 0, 0 };

	std::vector<int> m = { 8, 8, 8, 8, 8, 8, 8, 8 };

	bool rho(int i);

	std::pair<bool, int> correct(int ind);


	bool board[8][8] = { { 0, 0, 0, 0, 0, 0, 0, 0  },
					     { 0, 0, 0, 0, 0, 0, 0, 0  },
					     { 0, 0, 0, 0, 0, 0, 0, 0  },
						 { 0, 0, 0, 0, 0, 0, 0, 0  },
						 { 0, 0, 0, 0, 0, 0, 0, 0  },
						 { 0, 0, 0, 0, 0, 0, 0, 0  },
						 { 0, 0, 0, 0, 0, 0, 0, 0  },
					     { 0, 0, 0, 0, 0, 0, 0, 0  } };

	bool safe(int& row, int& col);


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

			print();
		}
		else
		{
			//board[j][i] = true;

			//print();

			board[j][i] = false;
		}

		j += 1;
	}

	return l;
}

std::pair<bool, int> Problem::correct(int ind)
{
	bool l = true;

	int i = ind;

	while (l && i < n)
	{
		l = rho(i);

		i += 1;
	}

	ind = i - 1;

	return std::make_pair(l, ind);
}

bool Problem::safe(int& row, int& col)
{
	int i, j;

	// Check this row on left side
	for (i = 0; i < col; i++)
		if (this->board[row][i])
			return false;

	// Check upper diagonal on left side
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (this->board[i][j])
			return false;

	// Check lower diagonal on left side
	for (i = row, j = col; j >= 0 && i < n; i++, j--)
		if (this->board[i][j])
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

	BacktrackSearch<Problem> B(AlgoTypes::Increasing, P);

	B.run();

	return 0;
}