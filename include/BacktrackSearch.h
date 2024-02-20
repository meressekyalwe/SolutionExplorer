#pragma once

class Enumerator;
class LinearSearch;
class Task;


/// <summary>
/// 
/// </summary>
class BacktrackSearch
{
public:

	virtual void run();

	virtual bool found();

	virtual Task elem();

protected
	
	Enumerator t;

	LinearSearch s;
};
