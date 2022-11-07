// DoWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main(){
int sum = 0;
 int data = 0;

 while (data != -1)
 {
	 sum += data;
	
		 // Read the next data
		 cout << "Enter an integer (the input ends " <<
		 "if it is 0): ";
	 cin >> data;
	 }
 

 cout << "The sum is " << sum << endl;

 return 0;
 }


