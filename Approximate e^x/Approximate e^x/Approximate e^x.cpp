// Approximate e^x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
  

	double x;

	cout << "Insert a value: ";
	
	cin >> x;

	//Formula for getting the e^x approximation
	double approximation = 1 + pow(x, 1) / 1 +pow(x, 2) / 2+ pow(x, 3) / 6 + pow(x, 4) / 24 + pow(x, 5) / 120;

	cout << "Aproximation is: " << approximation << endl << endl;











}

