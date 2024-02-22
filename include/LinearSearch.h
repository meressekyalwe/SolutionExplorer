#pragma once

#include "Enumerator.h"


/// <summary>
/// 
/// </summary>
class LinearSearch
{
public:

	void run();

	bool found();

	Task elem();

protected:

	virtual bool cond();

	Enumerator t;
};