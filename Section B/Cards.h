#include<iostream>
#ifndef CARDS_H
#define CARDS_H

class Card {
    private:
        int Number;
        char Type;
    
    public:
        Card(int num, char suit);
        int getnumber(){return Number;}
        char getType(){return Type;}
        void Display();
};


#endif // CARD_H