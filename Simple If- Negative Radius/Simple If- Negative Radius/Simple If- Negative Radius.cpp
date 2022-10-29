
#include <iostream>
using namespace std;
int main()
{

    double radius;
    double area;
    cout << "Please enter the radius: ";

    cin >> radius;

    if (radius <= 0) {
        cout << "Cannot calculate radius with a negative value, it must be positive. Please try agian: ";
        cin >> radius;
        
        area = 3.14 * radius * radius;
        cout << "The area = " << area << endl << endl;
    }

    else {
        area = 3.14 * radius * radius;
        cout << "The area = " << area << endl << endl;


        return 0;



    }
}

