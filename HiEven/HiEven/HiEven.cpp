

#include <iostream>
using namespace std;

int main()
{

    int num;


    cout << "Enter a number; " ;


    cin >> num;

    if (num % 5 == 0) 
        cout << "HiFive" << endl << endl;
    


    if (num % 2 == 0) 
        cout << "HiEven" << endl << endl;
    

    if (num % 2 == 1) 
        cout << "HiOdd";
    



    return 0;
}

