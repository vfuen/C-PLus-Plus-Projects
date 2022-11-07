// Table of PrimeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, j, space = 1;

	cout << "Enter number of rows in a diamond you want: ";
	cin >> n;
	space = n - 1; // It will print spaces n-1 times initially and then it will decrease one by one

	// for the upper part of the diomond or top part
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= space; i++) // for spaces it will prints this loop will run
			cout << " ";

		space--;

		for (i = 1; i <= 2 * j - 1; i++) // for asterisk this loop executes
			cout << "*";

		cout << ""; // after each iteration it will go for new line
	}

	// for the lower part of the diamond
	space = 1; // initially it will start with one space ,then it will increases one by one

	for (j = 1; j <= n - 1; j++) // for the lower part of the diamond
	{
		for (i = 1; i <= space; i++) // for it will print one space ,then it will increases one by one
			cout << " ";

		space++; // for space increament

		for (i = 1; i <= 2 * (n - j) - 1; i++) // for asterisk this loop executes
			cout << "*";

		cout << ""; // after each iteration it will go for new line
	}
}
