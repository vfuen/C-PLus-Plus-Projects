// GreatestCommonDivisor(GCD).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter first number: ";
	int num1;
	cin >> num1;



	cout << "Enter second number: ";
	int num2;
	cin >> num2;






	int gcd = 1;

	
	
	for (int d = 2; d <= num1 && d <= num2; d++) {




		if (num1 % d == 0 && num2 % d == 0)
				gcd = d;
	








		}
		cout << "For " << num1 << " and " << num2 << " the greatest common divisor is " << gcd;




		return 0;






	

}


