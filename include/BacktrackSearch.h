#pragma once

#include "Enumerator.h"
#include "LinearSearch.h";
#include "Task.h"


/// <summary>
/// 
/// </summary>
class BacktrackSearch
{
public:

	void run();

	bool found();

	Task elem();

protected:
	
	Enumerator t;

	LinearSearch s;
};
