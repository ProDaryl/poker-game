#include<iostream>
#ifndef CARDS_H
#define CARDS_H

class Card {
    private:
        int Number;
        char Type;
    
    public:
        Card(int n, char s);
        int getNumber() {return Number;}
        char getType() {return Type;}
        void Display();
};


#endif