// Reverse array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




int main(){
	int list[] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 1; i < 6; i++)
		list[i] = list[i - 1];

	for (int i = 0; i < 6; i++)
		cout << list[i] << " ";


return 0;
}

	