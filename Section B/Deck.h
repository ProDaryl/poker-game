#if !defined(DECK_H)
#define DECK_H
#include <iostream>
#include <vector>
#include <algorithm>
//deck of cards made up of 52 cards
#include "Cards.h"

using namespace std;

class Deck
{
private:
    vector<Card> cards;
public:
    Deck();
    void shuffle();
    Card drawCard();
};
#endif // DECK_H