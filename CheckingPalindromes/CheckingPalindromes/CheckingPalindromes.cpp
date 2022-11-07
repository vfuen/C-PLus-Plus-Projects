// CheckingPalindromes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
using namespace std;
int main()
{

	cout << "Enter a word ";//Display the string on the console for the user to see and respond to


	string s;//String variable with no value stored in it

	getline(cin, s);//stores what the user wrote into the string variable s

	int low = 0;//used later on to indicate as the first letter of the string to see if it will match with the last letter later on
	int high = s.length() - 1;//setting to the highest letter of the string

	bool isPalindrome = true;//setting this boolean to true first



	while (low < high)//Keeps doing this loop until high is less than low 
	{

		if (s[low] != s[high]) {
			//If low letter does not equal the high letter then boolean becomes false and the exits out of loop
			isPalindrome = false;
			break;
		}

		//If all the letters in the string are the same between low and high then keep incrementing and decrimenting until high is less than low
		low++;
		high--;
	}

		if (isPalindrome) {//if bool is never set to false then this statement will print to the console
			cout << s << " is a palindrome.";

		}
	
		else {
			//otherwise bool is set to false and then this statement will print to the console

			cout << s << " is not a palindrome.";

		}








}
