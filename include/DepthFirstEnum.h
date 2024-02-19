#pragma once


#include "Enumerator.h"

/// <summary>
/// 
/// </summary>
class DepthFirstEnum : public Enumerator
{
public:

	void first();

	void next();

	bool end();

	bool is_depthfirst();
};
