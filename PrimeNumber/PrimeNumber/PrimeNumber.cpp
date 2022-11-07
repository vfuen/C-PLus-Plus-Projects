
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   
	char  string1[500];
	char string2[500];

	int char1[123]={0};

		int char2[123]={0};
		char chars{};

		cout << "Enter the first word ";
		cin>>(string1);


			cout << "Enter the second word ";

			cin >> string2;

			for (int i=0 ; string1[i] != '\0'; i++)
				char1[string1[i]]++;
			for (int i=0 ; string1[i] != '\0'; i++)
				char2[string2[i]]++;




			for (int i=0 ; i < 123; i++) {

				if (char1[i] != 0 && char2[i] != 0)

					char chars = (char)(i);

				cout << chars;

			}



	return 0;


}
