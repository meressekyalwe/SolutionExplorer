
#include "LinearSearch.h"

LinearSearch::LinearSearch()
{
	t = std::make_shared<Enumerator>();
}

void LinearSearch::run()
{

}

bool LinearSearch::found()
{
	return false;
}


std::shared_ptr<Task> LinearSearch::elem()
{
	return{};
}

bool LinearSearch::cond()
{
	return false;
}