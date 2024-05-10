#include "Cards.h"
#include<vector>
#ifndef DECK_H
#define DECK_H

class Deck {
    private:
        std::vector<Card> cards;
    public:
        Deck();
        void Shuffle();
        Card drawCard();
};

#endif