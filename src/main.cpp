
#include "BacktrackSearch.h"

int main()
{
	BacktrackSearch b;

	b.run(AlgoTypes::DepthFirst);

	b.found();
	
	return 0;
}