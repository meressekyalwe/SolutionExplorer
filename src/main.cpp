
#include "SolutionExplorer.h"
#include <iostream>
#include <chrono>
#include <algorithm>


class Problem
{
public:

	const int n = 4;

	std::vector<int> v { std::vector<int>(n, 0) };

	std::vector<int> m { std::vector<int>(n, n) };

	inline bool rho(const int i);

	inline std::pair<bool, int> correct(int ind);

	bool board[50][50] = { 0 };

	bool safe(const int row, const int col);

	void print();
};

bool Problem::rho(const int i)
{
	bool l = false;

	for (int j = 0; j < n && !l; ++j)
	{
		if (safe(j, i))
		{
			this->board[j][i] = 1;

			l = true;
		}
		else
		{
			this->board[j][i] = 0;
		}
	}	

	return l;
}

std::pair<bool, int> Problem::correct(int ind)
{
	bool l = true;

	int i = ind;

	for (i; l && i < n; ++i)
	{
		l = this->rho(i);
	}

	ind = i - 1;

	return std::make_pair(l, ind);
}

bool Problem::safe(const int row, const int col)
{
	// Check this row on left side
	for (int j = 0; j < this->n; ++j)
	{
		if (this->board[row][j])
		{
			return false;
		}
	}

	// Check upper diagonal on left 
	for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
	{
		if (this->board[i][j])
		{
			return false;
		}
	}

	// Check lower diagonal on left side
	for (int i = row, j = col; i < this->n && j >= 0; ++i, --j)
	{
		if (this->board[i][j])
		{
			return false;
		}
	}

	return true;
}


void Problem::print()
{
	for (int k = 0; k < n; ++k)
	{
		for (int l = 0; l < n; ++l)
		{
			std::cout << board[k][l] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;
}


int main()
{
	auto start = std::chrono::steady_clock::now();

	Problem P;

	SolutionExplorer<Problem> B(AlgoTypes::BFS_Recursive, P);

	B.run();

	auto end = std::chrono::steady_clock::now();

	B.elem()->print();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "elapsed time: " << elapsed_seconds.count() << "s" << std::endl;

	return 0;
}