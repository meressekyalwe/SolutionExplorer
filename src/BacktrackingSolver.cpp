
#include "BacktrackingSolver.h"


BacktrackingSolver::BacktrackingSolver()
{

}

BacktrackingSolver::~BacktrackingSolver()
{

}

bool BacktrackingSolver::IsSafe(std::vector<std::vector<bool>> board, size_t index, size_t column)
{

	return false;
}

bool BacktrackingSolver::Solve(size_t N, int col)
{
	board.resize(N, std::vector<bool>(N, false));

	//If we have filled all the colums already
	if (col >= N) return true;

	// Iterating over each row in column col
	for (int i = 0; i < N; i++)
	{
		//Place the queen at the corresponding position if it is safe, by updatig the matrix with 1
		if (IsSafe(board, i, col)
		{
			board[i][col] = 1;

			//Check if there is a possible arrangement for the current position of the queen in the colun col.
			if (Solve(board, col + 1))
			{
				return true;
			}

			//If no possible arrangement is found the back track and remove the queen
			board[i][col] = 0;
		}
	}

	//Go back it iterated over each row without finding any solution.
	return false;
}




