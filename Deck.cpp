#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include "Cards.h" // Assuming this header file contains the Card class declaration

class Deck {
private:
    std::vector<Card> cards;      

public:
    Deck();
    void Shuffle();
    Card drawCard();
};

Deck::Deck() {
    
}

void Deck::Shuffle() {
    
}

Card Deck::drawCard()
{
    return Card();
}
