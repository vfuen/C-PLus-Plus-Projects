// PredictingFutureIntuition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>

#include <iostream>
using namespace std;

int main()
{
	double tuition = 10000;
	int year =1;
		for (year; year <= 11; year++) {
			tuition = tuition * 1.07;
			cout << "Tuition is $" <<setprecision(2)<<fixed<<showpoint << tuition << " for year " << year << endl;

		

	}
		cout << "\nSo, tuition will be $" << setprecision(2) << fixed << showpoint << tuition << " in 11 years." << endl;

}


