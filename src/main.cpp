
#include "Queens.h"
#include "BacktrackSearch.h"


int main()
{
	Queens MyTask;

	//Enumerator<Queens> E(Queens MyTask);

	BacktrackSearch<Queens> B(AlgoTypes::DFS_Iterative, MyTask);

	//B.run();

	return 0;
}