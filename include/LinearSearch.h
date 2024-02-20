#pragma once

class Enumerator;
class Task;

/// <summary>
/// 
/// </summary>
class LinearSearch
{
public:

	void run() override;

	bool found() override;

	Task elem() override;

protected:

	virtual bool cond();

	Enumerator t;
};