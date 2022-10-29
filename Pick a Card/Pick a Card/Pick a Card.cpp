// Pick a Card.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string type[] = { "Diamonds", "Hearts", "Spades", "Clubs" };
string number[] = {"Ace", "2", "3", "4", "5", "6", "7", "8",
        "9", "10", "Jack", "Queen", "King"};
string randomcard() {
    string card;
    srand(time(0));
    int cardRange = 1 + (rand() % 14);
    int aType = 1 + (rand() % 4);
    
    
    card += number[cardRange];
    card += " of ";
    card += type[aType];
    return card;
}
int main() {
    int numberofcards = 52;

    cout << "The card you picked is " << randomcard() << endl;


}