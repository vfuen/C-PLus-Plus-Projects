// Common Elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void  commonElements( int list1[],  int list2[],int size){



    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++)
            if (list1[i] == list2[j]) {
                cout << list1[i];
            }
            else {
                continue;
            }
    }




}


int main()
{
    
  const  int size = 10;
    int list1[size];


    int list2[size];


    cout << "Enter list1: ";
    for (int i = 0; i < size; i++) {

        cin >> list1[i];
    }

    cout << "Enter list2: ";

    for (int i = 0; i < size; i++) {

        cin >> list2[i];

    }

    cout << "The common elements are ";
   
commonElements(list1, list2, size);


return 0;
}

