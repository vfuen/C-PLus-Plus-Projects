// IfElseClause.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int i = 1;
int j = 2;
int k = 3;




int main()
{

    if (i > j)
    {
        //if clasue also has to be inside the braces for this to work.
        //if both if clasuses boolean expressions are true then the if clause statment will print.
        if (k > j)  
            cout << "A";

    }

    //else clasue will print if both if clasues are false.
    //The braces force the first if clasue to recognize the else clause instead of just exiting out  
    else
        cout << "B";



}
