// Assign Grades.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()



{

	int s[100];
	 int students;
	 cout << "Enter number of students: ";

		 cin >> students;


		 



		 cout << "Enter " << students << " scores: ";
		 
		 int highest = s[0];
		 
		 for (int i = 0; i < students; i++) {
			 cin >> s[i];

			

			 if (s[i] >= 100 - 10)
				 cout << "Student " << i << " score is " << s[i] << " and grade is A"<<endl;


			 else if (s[i] >= 100 - 20)
				 cout << "Student " << i << " score is " << s[i] << " and grade is B"<<endl;

			 else if (s[i] >= 100 - 30)
				 cout << "Student " << i << " score is " << s[i] << " and grade is C"<<endl;

			 else if (s[i] >= 100 - 40)
				 cout << "Student " << i << " score is " << s[i] << " and grade is D"<<endl;

			 else if (s[i] < 60) 
				cout << "Grade is F"<<endl;
		 
		 
		 }





}


