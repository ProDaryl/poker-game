#include<iostream>
#ifndef CARDS_H
#define CARDS_H

class Card {
    private:
        int Number;
        char Type;
    
    public:
        Card();
        Card(int v, char t);
        void Display(int, char);
};


#endif