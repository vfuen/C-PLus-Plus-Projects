// TestSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double sum = 0;
	double currentValue = 0.01;
	for (int count = 0; count < 100; count++)
	{
		sum =sum+ currentValue;
		currentValue =currentValue+ 0.01;
	}


	cout << sum;
}

