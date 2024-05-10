#include <iostream>
#include<vector>
#include "Cards.h" 

using namespace std;


void Card::Display() {
    int num = getNumber(); 
    char type = getType();
    if (num > 1 || num <= 10) {
        cout << " ______________" <<endl;
        cout << "|              |" <<endl;
        cout << "|   _________  |" <<endl;
        cout << "|  |         | |" << endl;
        cout << "|  | " << num << "      | |" << endl;
        cout << "|  |         | |" << endl;
        cout << "|  |   " << type << "   | |" << endl;
        cout << "|  |         | |" << endl;
        cout << "|  |     " << num << "  | |" << endl;
        cout << "|  |         | |" << endl;
        cout << "|  |_________| |" <<endl;
        cout << "|              |" <<endl;
        cout << "()--------------" <<endl;
    }
    else {
        
    }
}

Card::Card() {}

Card::Card(int cardNumber, char cardType) {
    Number = cardNumber;
    Type = cardType;
}
