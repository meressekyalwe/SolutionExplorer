
#include "DFS_RecursiveLinSearch.h"
#include "DepthFirstEnum.h"


DFS_RecursiveLinSearch::DFS_RecursiveLinSearch()
	: LinearSearch()
{
	t = std::make_shared<DepthFirstEnum>();
}