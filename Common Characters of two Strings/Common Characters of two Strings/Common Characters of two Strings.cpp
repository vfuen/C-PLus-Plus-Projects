#include<iostream> 
using namespace std;

int main()
{
    string string1;

    string string2;

    cout << "Enter first word: ";
    cin >> string1;
    cout <<endl<< "Enter second word: ";
    cin >> string2;

    int alpha1[26] = { 0 };
    int alpha2[26] = { 0 };
    int x;
    int y;
    char char1 = 'a';
    int z = (int)char1, w;

    char characters=0;

    for (x = 0; x < string1.length(); x++)
    {
        alpha1[(int)string1[x] - z]++;
    }
    for (x = 0; x < string2.length(); x++)
    {
        alpha2[(int)string2[x] - z]++;
    }
    cout <<endl<< "The Common Characters=";

    for (x = 0; x < 26; x++)
    {
        if (alpha1[x] > 0 && alpha2[x] > 0)
        {
            for (y = 0; y < min(alpha1[x], alpha2[x]); y++)
            {
                w = z +x ;
                characters = (char)(z + x);

                cout << characters;

            }
        
           
        }



    }





    return 0;
}