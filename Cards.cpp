#include<iostream>
#include "Cards.h"

Card::Card(int cardNumber, char cardType)
{
    Number = cardNumber;
    Type = cardType;
}


void Card::Display()
{
    // Define constants for special card numbers
    const char ACE = 'A';
    const char JACK = 'J';
    const char QUEEN = 'Q';
    const char KING = 'K';
    
    // Define the card representation
    const std::string CARD_TOP = " ______________";
    const std::string CARD_SIDE = "|              |";
    const std::string CARD_MIDDLE = "|   _________  |";
    const std::string CARD_NUM_TOP = "|  |         | |";
    const std::string CARD_BOTTOM = "|  |_________| |";
    const std::string CARD_SPACE  = "|  |         | |";
    const std::string CARD_END = "|              |";
    const std::string CARD_BASE = "()--------------";
    
    // Display the card based on its number and type
    std::cout << CARD_TOP << std::endl;
    std::cout << CARD_SIDE << std::endl;
    std::cout << CARD_MIDDLE << std::endl;
    std::cout << CARD_NUM_TOP << std::endl;
    
    // Display the card number or face
    if (Number >= 2 && Number <= 10){
        std::cout << "|  | " << Number <<"       | |" << std::endl;
    }
    else if (Number == 1) {
        std::cout << "|  | " << "A" <<"       | |" << std::endl;
    }
    else if (Number == 11) {
        std::cout << "|  | " << "J" <<"       | |" << std::endl;
    }
    else if (Number == 12) {
        std::cout << "|  | " << "K" <<"       | |" << std::endl;
    }
    else if (Number == 13) {
        std::cout << "|  | " << "Q" <<"       | |" << std::endl;
    }

    std::cout << CARD_SPACE <<std::endl;
    std::cout << "|  |    "<< Type <<"      | |" <<std::endl;
    std::cout << CARD_SPACE <<std::endl;
    std::cout << CARD_BOTTOM << std::endl;
    std::cout << CARD_END << std::endl;
    std::cout << CARD_BASE << std::endl;
}
