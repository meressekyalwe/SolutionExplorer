#pragma once


#include "Enumerator.h"

/// <summary>
/// The class DepthFirstEnum describes the object of depth-first enumerator
/// </summary>
class DepthFirstEnum : public Enumerator
{
public:

	/// <summary>
	/// sets the initial values of the members.
	/// </summary>
	void first() override;

	/// <summary>
	/// does one step in the problem space according to the depth -first traversal
	/// </summary>
	void next() override;

	/// <summary>
	/// indicates the end of the traversal.
	/// </summary>
	/// <returns></returns>
	bool end() override;

	/// <summary>
	/// is depthfirst ?
	/// </summary>
	/// <returns></returns>
	bool is_depthfirst();
};
