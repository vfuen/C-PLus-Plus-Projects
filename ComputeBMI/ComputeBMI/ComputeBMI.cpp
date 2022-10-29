// ComputeBMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{

	double weight, height;

	double weightInKilo, heightInMeters;


	





	cout << "Please enter your weight in pounds: ";
	cin >> weight;
	weightInKilo = 0.45359237 * weight;
	cout << "Please enter your height in meters: ";

	cin >> height;
	heightInMeters = 0.0254 * height;



	double BMI = weightInKilo / (heightInMeters * heightInMeters);
	cout << "Your BMI is: " << BMI<<endl;


	/*if (BMI < 16)
		cout << "Serious underweight";

	if (BMI >= 16 && BMI < 18)
		cout << "Underweight";

	if (BMI >=18 && BMI < 24)
		cout << "Normal Weight";
	
	if (BMI >= 24 && BMI < 29)
		cout << "Overweight";

	if (BMI >= 29 && BMI < 35)
		cout << "Serious Overweight";
	
	if(BMI>= 35)
		cout << "Gravely Overweight";

	*/


	// Or can use elsf if statement

	if (BMI < 16)
		cout << "Serious underweight";

	else if (BMI < 18)
		cout << "Underweight";

	else if (BMI < 24)
		cout << "Normal Weight";

	else if (BMI < 29)
		cout << "Overweight";

	else if (BMI < 35)
		cout << "Serious Overweight";

	else if (BMI >= 35)
		cout << "Gravely Overweight";


	
	return 0;
}
