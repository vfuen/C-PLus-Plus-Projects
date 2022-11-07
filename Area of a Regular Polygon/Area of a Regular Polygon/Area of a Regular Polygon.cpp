// Area of a Regular Polygon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	double n;

	double s;


	cout << "Enter the number of sides: ";
		cin >> n;
		
		
		
		cout << "Enter the side ";
		cin >> s;


		double areaOfPolygon = (n * pow(s, 2)) / 4 * atan(n);
		cout << "The area of the polygon is " << areaOfPolygon;

}

