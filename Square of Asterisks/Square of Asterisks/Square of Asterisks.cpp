// Square of Asterisks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void squaresOfAsterisks(char a) {


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
		{
			if (j % 4 == 0)
				cout << endl;

			cout << a;

		}
	}
}

int main()
{

	char a = '*';



	squaresOfAsterisks(a);



	return 0;



}
