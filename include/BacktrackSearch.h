#pragma once

class Enumerator;
class LinearSearch;


/// <summary>
/// 
/// </summary>
class BacktrackSearch
{
public:

	void run();

	bool found();

protected
	
	Enumerator t;

	LinearSearch s;
};
