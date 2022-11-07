// addloop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <ctime> 
#include <cstdlib> 
#include <iostream>
using namespace std;
int main()

{

	

	//srand(static_cast <unsigned int> (time(0)));
	 srand(time(0));

	int randomnum = 1 + (rand() % 100);
	int userNumber=-3;





	while (userNumber != randomnum) {
		cout << "Enter your guess: ";
		cin >> userNumber;

		if (userNumber < randomnum) {
			cout << "Your guess is lower\n\n";

		}

		if (userNumber > randomnum) {
			cout << "Your guess is higher\n\n";


		}





	}


	
		cout << "Yes, the number is " << userNumber<<"\n";
		
		
		
		
		return 0;
}


