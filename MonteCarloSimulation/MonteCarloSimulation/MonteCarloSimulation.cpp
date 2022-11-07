// MonteCarloSimulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{


	const int Number_Of_Trials = 10000000;//Generates 1,000,00 points in the square
	int numberOfHits = 0;//NUmber of points that are in the circle
	srand(time(0));




	for (int i = 0;i< Number_Of_Trials; i++) {

		double x = rand() * 2.0 / RAND_MAX - 1;//repeated random points of x generated.Rand_Max is numbers between -1.0 and 1.0 for x.
		double y = rand() * 2.0 / RAND_MAX - 1;//repeated random points of y generated. Rand_Max is numbers between -1.0 and 1.0 for y.

		if (x* x + y * y <=1) // If this is true then that means the point lies in the circle area
			numberOfHits++;//Increments by 1 because there is one point in the circle
		}

		double pi = 4.0 * numberOfHits / Number_Of_Trials;//Probability of point landing in the circle area.

		cout << "PI is " << pi;
		
		return 0;
	


}
