#include<iostream>
#ifndef CARDS_H
#define CARDS_H

class Card {
    private:
        int Number;
        char Type;
    
    public:
        Card(int cardNumber, char cardType);
        void Display();
};


#endif