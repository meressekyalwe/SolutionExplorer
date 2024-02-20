#pragma once

class Task;


/// <summary>
/// 
/// </summary>
class Enumerator
{
public:

	Enumerator();

	int getInd();

	void setInd(int ind);

	Task getTask();

	void first();

	void next();

	bool end();

	Task current();

protected:

	int ind;

	Task u;
};
