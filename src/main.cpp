
#include "BacktrackSearch.h"

class Problem
{
public:

	bool rho(int i = 1)
	{
		return (i > 0);
	}
};


int main()
{
	Problem P;

	BacktrackSearch<Problem> B(AlgoTypes::DFS_Iterative, P);

	return 0;
}