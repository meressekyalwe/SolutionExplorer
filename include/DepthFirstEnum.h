#pragma once


#include "Enumerator.h"

/// <summary>
/// 
/// </summary>
class DepthFirstEnum : public Enumerator
{
public:

	void first() override;

	void next() override;

	bool end() override;

	bool is_depthfirst();
};
