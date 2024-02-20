#pragma once

#include "Enumerator.h"

/// <summary>
/// 
/// </summary>
class IncreasingEnum : public Enumerator
{
public:

	void first() override;

	void next() override;

	bool end() override;

	bool is_increasing();

	Task current();

protected:

	bool c;
};
