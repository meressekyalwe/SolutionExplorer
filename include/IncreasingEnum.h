#pragma once

#include "Enumerator.h"

/// <summary>
/// The class IncreasingEnum describes the object of increasing enumerator
/// </summary>
class IncreasingEnum : public Enumerator
{
public:

	/// <summary>
	/// initializes u:v and c.
	/// </summary>
	void first() override;

	/// <summary>
	/// does one step in the problem space according to the increasing traversal.
	/// </summary>
	void next() override;

	/// <summary>
	/// checks the value of over ow digit c.
	/// </summary>
	/// <returns></returns>
	bool end() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool is_increasing();

	/// <summary>
	/// returns the current leaf.
	/// </summary>
	/// <returns></returns>
	Task current();

protected:

	/// <summary>
	/// c that is the overflow digit of the increasing process, Its value 1 indicates the end of the traversal.
	/// </summary>
	bool c;
};
