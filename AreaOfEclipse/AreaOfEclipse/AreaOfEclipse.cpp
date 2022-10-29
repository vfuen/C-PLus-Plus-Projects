// AreaOfEclipse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    double a;
    double b;

 


   
    
    cout << "Please type in the major radius: ";

    cin >> a;

    cout << "Next please type in the minor radius: ";

    cin >> b;


    double aEllipse = 3.14 * a * b;

    
    cout << "The area of the Ellipse is: " << aEllipse<<endl;
}

