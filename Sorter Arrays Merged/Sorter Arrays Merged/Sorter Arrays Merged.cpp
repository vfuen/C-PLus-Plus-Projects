// Sorter Arrays Merged.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int* mergeArrays(int* array1, int size1, int array2, int size2) {
	
	
	int total = 0;


	for (auto i = 0; i < size1; i++) {
		total += array1[i];

	}


		for (auto j = 0; j < size2; j++) {
			total += array2[&j];

		}



		return  &total;



	}

int main()
{
	const int s1 = 5;
	const int s2 = 10;
	int a1[s1]{};
	int a2[s2]{};

	for (auto i = 0; i < s1;i++) {
		a1[i] = 1+i;
		std::cout << a1[i] << std::endl;
	}



	for (auto i = 0; i < s2; i++) {
		a2[i] = 1+i;
		std::cout << a2[i]<< std::endl;
	}

	std::cout<<mergeArrays(a1, s1, *a2, s2);


}

