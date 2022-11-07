// Calculate e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iomanip>
#include<String>
#include <iostream>
#include <cmath>
using namespace std;
int main(){

	int m=1;
	int n=1;

	double i=1;
	double j=1;
	double k;
	double l;

	cout << "Enter a number to calculate the mathmatical constant of it: ";

	cin >> k;

	for (m ; m <= 100; m++) {
		for (n ; n <= m; n++) {

			j = j * n;

		}
		l = pow (k, m);
		i = i + l/j;




		}
	cout <<"The mathmatical constant of " << k << " is " << setprecision(10) << i << endl;



	}






