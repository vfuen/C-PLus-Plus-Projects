// Summing Column of 2D Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    const int columnSize = 4;
    const int rowSize = 4;
    int matrix[5][5];
    for (int column = 0; column < columnSize; column++)
    

    
    {
        int total = 0;


            for (int row = 0; row < rowSize; row++)
            total += matrix[row][column];
            cout << "Sum for column " << column << " is " << total << endl;

        }
    }
