// MathLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "MathLibrary.h"

namespace MathLibrary
{
	double Functions::Add(double a, double b)
	{
		return a + b;
	}

	double Functions::Multiply(double a, double b)
	{
		return a * b;
	}

	double Functions::AddMultiply(double a, double b)
	{
		return a + (a * b);
	}

	Functions* instance;

	void CreateInstance()
	{
		instance = new Functions();
	}

	void ReleaseInstance()
	{
		delete instance;
	}

	double Add(double a, double b)
	{
		return instance->Add(a, b);
	}

	double Multiply(double a, double b)
	{
		return instance->Multiply(a, b);
	}

	double AddMultiply(double a, double b)
	{
		return instance->AddMultiply(a, b);
	}
}

