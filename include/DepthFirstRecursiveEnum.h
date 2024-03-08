#pragma once

#include "Enumerator.h"
#include <map>
#include <list>

template<TaskConcept T>
class DepthFirstRecursiveEnum : public Enumerator<T>
{
public:

	DepthFirstRecursiveEnum(T MyTask);

	/// <summary>
	/// 
	/// </summary>
	void start() override;

	/// <summary>
	/// 
	/// </summary>
	void next() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool end() override;

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	bool is_depthfirst_rec();

protected:

	/// <summary>
	/// 
	/// </summary>
	/// <param name="v"></param>
	void DFSUtil(int v);


	/// <summary>
	/// 
	/// </summary>
	/// <param name="v"></param>
	/// <param name="w"></param>
	void addEdge(int v, int w);

private:

	/// <summary>
	/// 
	/// </summary>
	std::map<int, bool> visited;

	/// <summary>
	/// 
	/// </summary>
	std::map<int, std::list<int> > adj;
};

#include "DepthFirstRecursiveEnum.cpp"