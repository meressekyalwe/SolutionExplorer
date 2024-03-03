
#include "BacktrackSearch.h"
#include <iostream>
#include <chrono>


class Problem
{
public:

	const int n = 10;

	std::vector<int> v { std::vector<int>(n, 0) };

	std::vector<int> m { std::vector<int>(n, n) };

	bool rho(int i);

	std::pair<bool, int> correct(int ind);

	int board[50][50] = { 0 };

	bool safe(int row, int col);

	void print();
};

bool Problem::rho(int i)
{
	bool l = false;

	for (int j = 0; j < n && !l; ++j)
	{
		if (safe(j, i))
		{
			board[j][i] = 1;

			l = true;
		}
		else
		{
			board[j][i] = 0;
		}
	}	

	return l;
}

std::pair<bool, int> Problem::correct(int ind)
{
	bool l = true;

	int i = ind;

#pragma omp parallel for
	for (i; l && i < n; ++i)
	{
		l = rho(i);
	}

	ind = i - 1;

	return std::make_pair(l, ind);
}

bool Problem::safe(int row, int col)
{
	bool is_safe = true;
	int i, j;

	// Check this row on left side
#pragma omp parallel for shared(is_safe) private(i) reduction(&&: is_safe)
	for (i = 0; i < col; ++i)
	{
		if (this->board[row][i])
		{
#pragma omp atomic write
			is_safe = false;
		}
	}

	if (!is_safe)
		return false;

	// Check upper diagonal on left 
#pragma omp parallel for shared(is_safe) private(i, j) reduction(&&: is_safe)
	for (i = row, j = col; i >= 0 && j >= 0; --i, --j)
	{
		if (this->board[i][j])
		{
#pragma omp atomic write
			is_safe = false;
		}
	}

	if (!is_safe)
		return false;

	// Check lower diagonal on left side
#pragma omp parallel for shared(is_safe) private(i, j) reduction(&&: is_safe)
	for (i = row, j = col; i < n && j >= 0; ++i, --j)
	{
		if (this->board[i][j])
		{
#pragma omp atomic write
			is_safe = false;
		}
	}

	return is_safe;
}


void Problem::print()
{
#pragma omp parallel for
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

	BacktrackSearch<Problem> B(AlgoTypes::Increasing, P);

	B.run();

	auto end = std::chrono::steady_clock::now();

	B.elem()->print();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "elapsed time: " << elapsed_seconds.count() << "s" << std::endl;

	return 0;
}