#include <iostream>
using namespace std;

int main()

    {
        int values[5];
        for (int i = 1; i < 5; i++)
        {
            values[i] = values[i] + values[i - 1];
        }
        values[0] = values[1] + values[4];
    

    cout << values[0]<<endl;

    cout << values[1]<<endl;
    cout << values[2]<<endl;

    cout << values[3]<<endl;



}