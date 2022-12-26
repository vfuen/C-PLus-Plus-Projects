// Temperature Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

double cel(double fahrenheit) {

	fahrenheit = 5.0 / 9.0 * (fahrenheit - 32);


		return fahrenheit;
}





double fH(double celcius) {

	 celcius= 9.0 / 5.0 * (celcius + 32);


	return celcius;
}






int main()
{



	//"Enter numebr 1 for converting to celcius or number 2 to conver to fahrenheit ";
	double celcius = 0;

	double fahrenheit = 0;

	int conversion;
	
	
	cout<<"Enter 1 to convert to celcius or 2 for fahrenheit conversion: ";

	cin >> conversion;

	
	if(conversion ==1 )

	 {

		cout << "Enter farenheit to convert to celcius: ";
		cin >> fahrenheit;

		cout << "The temperature converted to celcius is " << cel(fahrenheit) << " degrees celcius.";
	}
	









	if(conversion==2)
	{
		cout << "Enter celcius to convert to fahrenheit: ";
		cin >> celcius;

		cout << "The temperature converted to fahrenheit is " << fH(celcius) << " degrees fahrenheit.";

	}
	return 0;
}

