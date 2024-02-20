#pragma once

class Task;


/// <summary>
/// 
/// </summary>
class Enumerator
{
public:

	int getInd();

	void setInd(int ind);

	Task getTask();

	virtual void first();

	virtual void next();

	virtual bool end();

	virtual Task current();

protected:

	int ind;

	Task u;
};
