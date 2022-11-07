// Table of Squares and Cubes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    cout << "number  "
         << " square "
         << "  cube" << endl;

    // Display the number title
    cout << "    ";
    for (int j = 1; j <= 10; j++)
        cout << setw(4) << j;

    cout << "\n";

    // Display table body
    for (int i = 1; i <= 9; i++) // Rows
    {
        cout << i << "  ";
        for (int j = 1; j <= 9; j++) // Number of colums for each row
        {
            // Display the product and align properly
            cout << setw(4) << pow(i * j);
        }
        cout << "\n";
    }

    return 0;
}
