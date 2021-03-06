// MathClient.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	MathLibrary::Functions mathf;

	cout << "a + b = " << mathf.Add(a, b) << endl;
	cout << "a * b = " << mathf.Multiply(a, b) << endl;
	cout << "a + (a * b) = " << mathf.AddMultiply(a, b) << endl;

    return 0;
}

