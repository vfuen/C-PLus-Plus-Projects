#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    cout <<left << "number ";



        cout  <<left<< "square";
        
        
        cout << setw(4) <<" cube" << endl;

    for (int i = 0; i <= 10; ++i) {
        cout << setw(3) << right << i  <<//sets the number of rows
            setw(6) << right<< (i * i) //squared numbers listed from 0 to 10
            <<setw(8) << right << (i*i*i) << endl;//list cubed numbers from 0-10
    }
    return 0;
}
		



	


