// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iomanip>
#include<String>
#include <iostream>
using namespace std;



int main()
{

	int n;
	int factor = 1;
	cout << "Enter non-negative number  to factor: ";

		cin >> n;
		if (n < 0) {
			cout << "Factorials are not letters, negative numbers, or special characters.\n";
		}
		else {
			cout << n << "!="<<n;

			for (int i=4; i != 0; i--) {

				cout << "x"<< i;

				factor *= i+1;





			}
			cout <<",wich is " << factor<<".";

		}

}

