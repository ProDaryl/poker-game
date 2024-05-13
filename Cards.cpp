#include<iostream>
#include "Cards.h"
using namespace std;

Card::Card(int n, char s) : Number(n), Type(s) {}


void Card::Display()
{
    // Define constants for special card numbers
    const char ACE = 'A';
    const char JACK = 'J';
    const char QUEEN = 'Q';
    const char KING = 'K';
    
    // Define the card representation
    const string CARD_TOP = " ______________";
    const string CARD_SIDE = "|              |";
    const string CARD_MIDDLE = "|   _________  |";
    const string CARD_NUM_TOP = "|  |         | |";
    const string CARD_BOTTOM = "|  |_________| |";
    const string CARD_SPACE  = "|  |         | |";
    const string CARD_END = "|              |";
    const string CARD_BASE = "()--------------";
    
    // Display the card based on its number and type
    cout << CARD_TOP << endl;
    cout << CARD_SIDE << endl;
    cout << CARD_MIDDLE << endl;
    cout << CARD_NUM_TOP << endl;
    
    // Display the card number or face
    if (Number >= 2 && Number <= 10){
        cout << "|  | " << Number <<"       | |" << endl;
    }
    else if (Number == 1) {
        cout << "|  | " << ACE <<"       | |" << endl;
    }
    else if (Number == 11) {
        cout << "|  | " << JACK <<"       | |" << endl;
    }
    else if (Number == 12) {
        cout << "|  | " << KING <<"       | |" << endl;
    }
    else if (Number == 13) {
        cout << "|  | " << QUEEN <<"       | |" << endl;
    }

    cout << CARD_SPACE <<endl;
    cout << "|  |    "<< Type <<"    | |" <<endl;
    cout << CARD_SPACE <<endl;
    cout << CARD_BOTTOM << endl;
    cout << CARD_END << endl;
    cout << CARD_BASE << endl;
}
