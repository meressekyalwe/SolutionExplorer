#pragma once


#include "Enumerator.h"


template<class T>
class DepthFirstEnum : public Enumerator<T>
{
public:

	/// <summary>
	/// 
	/// </summary>
	DepthFirstEnum(T MyTask);

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
