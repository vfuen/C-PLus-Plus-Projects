// Central City.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>

#include <iostream>
using namespace std;



double totalDis(double cords[][2], int i) {

    double total = 0;

    for (int j = 0; j < 5; j++)
    {
    

        total += distance(cords[i], cords[j]);
        
    }

    return total;



}



 double distance(double n1[] , double n2[] )

{

    return sqrt((n1[0] - n2[0]) * (n1[0] - n2[0]) + (n1[1] - n2[1]) * (n1[1] - n2[1]));

}


int main()




 {
    
    
    
    const int nCities =5;
    int cities;

    cout<<"Enter the number of cities: ";
    cin >>  cities;
    double cords[nCities][2];

    cout << "Enter the coordinates of the cities: " << endl;
    
    
    
    for (int i = 0; i < cities || i < nCities; i++)
    {

        cin >> cords[i][0];
        cin >> cords[i][1];


    }
 


  double totalMin=  totalDis(cords,0);

    int con = 0;




    for (int i = 1; i < nCities; i++)

    {

        double total = totalDis(cords,0);

        if (totalMin < total)

        {

            totalMin = total;

            con=i;

        }
      
    }

    cout << "The central city is at(" << cords[con][0] << "," << cords[con][1] << ")"<<endl;

    cout << "The total distance to all other cities is " << totalMin<<endl;


}


