#pragma once

#include "Enumerator.h"

/// <summary>
/// The class IncreasingEnum describes the object of increasing enumerator
/// </summary>
template<class T>
class IncreasingEnum : public Enumerator<T>
{
public:

	/// <summary>
	/// 
	/// </summary>
	/// <param name="MysTask"></param>
	IncreasingEnum(T MysTask);

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
	/// is increasing ?
	/// </summary>
	/// <returns></returns>
	bool is_increasing();

protected:

	/// <summary>
	/// c that is the overflow digit of the increasing process, Its value 1 indicates the end of the traversal.
	/// </summary>
	bool c;
};
