#pragma once


#include "Enumerator.h"

/// <summary>
/// The class DepthFirstEnum describes the object of dept-rst enumerator
/// </summary>
class DepthFirstEnum : public Enumerator
{
public:

	void first() override;

	void next() override;

	bool end() override;

	bool is_depthfirst();
};
