// Consecutive Four Equal Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

bool isConsecutiveFour( const int values[], int size) {
    int sameVal = 1;

    
    for ( int i = 0; i <= size; i++) {
        int section = values[1];

        if (values[i] == section) {
            sameVal++;
            section++;
            
            if (sameVal == 4) { 
                return true; 
            }
        }
      
    }
   return false;
        
}







int main()
{
	int size;
	const int NUMBER=80;
	cout << "Enter the number of values: ";

	cin >> size;
    
	 int values1[NUMBER];

     cout << "Enter the values: ";
     for (int i = 0; i < size; i++) 
    cin >> values1[i];

	if (isConsecutiveFour(values1, size)) {
		cout << "The list has consecutive fours." << endl;
	}
	else {
		cout << "The list has no consecutive fours." << endl;
	}
	
	
	return 0;

}

