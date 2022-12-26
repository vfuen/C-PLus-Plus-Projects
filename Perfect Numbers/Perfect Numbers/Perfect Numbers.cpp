// Perfect Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void isPerfect(int numb, int& sum) {

    for (int numb=1; numb <= 1000; numb++) {
        sum = 0;

        for (int i = 1; i <= numb / 2; i++) {//i fi is less than numb pass part one of test
              if (numb % i == 0) {//part two of test if the remainder is zero between numb and i then it is a perfect number
               sum =sum + i;//make sum equal the perfect number
             }
           }

          if (sum == numb) {
            cout << numb << " is a perfect number." << endl;
          }


       }

 }

int main()
{
	 int sum=0;

	const int number=1;


	isPerfect(number,sum);




}


