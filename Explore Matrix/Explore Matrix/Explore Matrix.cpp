// Explore Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <time.h>  

int main()
{

	srand(time(0));


	const int rowSize = 4;
	const int columnSize = 4;



	int m[rowSize][columnSize];




	for (int row = 0; row < rowSize; row++)
	{
		for (int column = 0; column < columnSize; column++)
		{




			m[row][column] = rand() % 2;

			cout << m[row][column];

		}

		cout << endl;







	}


	

	


	








}
