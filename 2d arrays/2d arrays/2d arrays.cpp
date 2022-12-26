// 2d arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>





void rowSum(std::vector<std::vector<double>>& va) {
	
	double total = 0;

	
	for (auto r = 0; r < va.size(); r++) {

		for (auto c = 0; c < va.size();c++)
			total += va[c][r];
	}

	std::cout << total;

}






int main()
{

	std::vector <std::vector<double>> v{ {1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}
	};


	rowSum(v);



}

