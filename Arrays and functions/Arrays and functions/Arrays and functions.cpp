// Arrays and functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdlib.h>
#include <iostream>
#include <time.h>  

using namespace std;


void randomNum(double a[], double SIZE)
{


	for (int i = 0; i < SIZE; i++) {


		a[i] = rand() % 10;

		cout << a[i] << endl;


	}






}

double getAverage(const double b[], const double SIZE)
{
	double total = 0;
	double average = 0;

	for (int i = 0; i < SIZE; i++) {


		total += b[i];




	}
	average = total / SIZE;
	return average;




}



void passBy(const double arr[], const int  SIZE) {


	for (int i = 0; i < SIZE;i++) {


		cout << arr[i] << endl;


	}



}


int main()
{
	
	srand(time(0));
	
	const int SIZE = 10;
	
	
	
	
	double arr[SIZE];
	double arr1[SIZE];
	double arr2[SIZE];



	randomNum(arr, 10);

	cout<<"The average: " << getAverage(arr1, 10.0) << endl;



	passBy(arr2, 14);



}


