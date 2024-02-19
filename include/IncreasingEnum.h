#pragma once

#include "Enumerator.h"

/// <summary>
/// 
/// </summary>
class IncreasingEnum : public Enumerator
{
public:

	void first();

	void next();

	bool end();

	bool is_increasing();

protected:

	bool c;
};
