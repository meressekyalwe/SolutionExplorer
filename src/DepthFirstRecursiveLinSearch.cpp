
#include "DepthFirstRecursiveLinSearch.h"
#include "DepthFirstEnum.h"


DepthFirstRecursiveLinSearch::DepthFirstRecursiveLinSearch()
	: LinearSearch()
{
	t = std::make_shared<DepthFirstEnum>();
}