// ResturantTip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    
    double tip;
    double billAmount;
    cout << "Enter the bill amount (in dollars): ";
        cin >> billAmount;
        
        

    cout << "Enter the tip percentage (%): ";

    cin >> tip;

     tip = tip / 100 * billAmount;

    double pay = billAmount + tip;

    

    cout<<endl<<endl<<"You need to pay " << pay<< " that is " <<billAmount <<" for the food + "<<tip<< " as tip."<<endl;



   







    
    
    
    
  
}

