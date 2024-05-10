#include<iostream>
#ifndef CARDS_H
#define CARDS_H

class Card {
    private:
        int Number;
        wchar_t Type;
    
    public:
        Card();
        Card(int v, char t);
        void Display();
        int getNumber() const {
            return Number;
        };
        char getType() const {
            return Type;
        };
};


#endif