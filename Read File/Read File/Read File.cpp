// Read File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include<fstream>
int main()
{

	std::ifstream input;
	std::ofstream output;

	input.open("C:\\Users\\vfuen\\source\\repos\\Read File\\Read File\\Text.txt");
	output.open("C:\\Users\\vfuen\\source\\repos\\Read File\\Read File\\Text2.txt");

	std::string fN;
	std::string lN;

	double s1;
	double s2;
	double s3;
	double s4;
	double avg = 0;


	while (input >> fN >> lN >> s1 >> s2 >> s3 >> s4 >> avg) {

		

		std::cout << fN << " " << lN << " " << s1 << " " << s2 << " " << s3 << " " << s4 << std::endl;
		avg = (s1 + s2 + s3 + s4) / 4;

		std::cout << fN << " " << lN << " Average is " << avg << std::endl << "\n";
		output << "\n " << fN << " " << lN << " Average is " << avg << std::endl<<"\n";
	}

	input.close();



	output.close();


	return  0;


}
