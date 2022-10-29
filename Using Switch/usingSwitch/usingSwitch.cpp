// usingSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




int main()
{

    
  //  int x = 5;
   // if (0<x)&&(x<100)
//cout << "x is between 1 and 100"  << endl;
   // if (0 < x&& x < 100)
      //  cout << "x is between 1 and 100" << endl;
    
    //bool even = true;


   // if (even = true) {
   //     cout << "It is even!" << endl;
   // }

   // int x = 3;
    //int y = 5;


    
    //switch (x + 4) {

   // case 6: y += 5;
   // case 7:y += 5;
   // default: x += 6;






    //}
    
  //  cout << pow(4.0, 1 / 2) << endl;
    
  //  double area = 3.5;


 //   cout << "area";

  //  cout << area<<endl;

  //  cout << 45 / 4 << endl;


  //  cout << 45 / 4 << endl;
//
 //   cout << "Y= " << y << " X= " << x << endl;

    int year;

    cout << "Pleae enter the year you were born: ";

    cin >> year;





    int chinesZodiac = year % 12;
    string animal;

    switch (chinesZodiac) {

    case 0: animal = "monkey";
        break;
    case 1:   animal = "rooster";
        break;

    case 2: animal = "dog";
        break;

    case 3:animal = "pig";
        break;

    case 4: animal = "rat";
        break;

    case 5: animal = "ox";
        break;

    case 6: animal = "tiger";
        break;

    case 7: animal = "rabbit";
        break;

    case 8: animal = "dragon";
        break;

    case 9: animal = "snake";
        break;

    case 10: animal = "horse";
        break;

    case 11: animal = "sheep";
        break;

    }

    cout << "Your Chinese Zodiac sign is the " << animal;


    //cout << 1 + 2 << endl;


   // cout << 5 % 2<<endl;


   // int n = 10000 * 10000 *10000;
  //  cout << "n is: " << n << endl;



    //cout << pow(2, 3) << endl;



}
