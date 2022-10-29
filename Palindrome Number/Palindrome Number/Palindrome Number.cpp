// Palindrome Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int num, reverse_num = 0, cin_num;
	
	cout << "Enter five numbers: "; 
	
	cin >> num;

	cin_num = num; 
	while (num > 0)
	{
		reverse_num = reverse_num * 10;
		reverse_num = reverse_num + num % 10;
		num = num / 10;
	}
	if (cin_num == reverse_num) 
	{
		cout << cin_num << " is a palindrome" << endl; 
	}
	else
	{
		cout << cin_num << " is not a palindrome" << endl;
	}
	return 0;
}







