#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Cards.h"
#include "Deck.h"
using namespace std;
Deck::Deck()
{
    char types[] = {'\x05', '\x03', '\x06', '\x04'};//characters of the suits
    srand(time(0));
    for (int number = 1; number <= 13; ++number)
    {
        cards.push_back(Card(number, types[rand() % 4]));//initialising the various cards
    }
}
void Deck::shuffle()//shuffle the deck
{
    srand(static_cast<unsigned int>(time(nullptr)));
    random_shuffle(cards.begin(), cards.end());
}
Card Deck::drawCard()//draw card from the deck to be given to players
{
    Card drawnCard = cards.back();
    cards.pop_back();
    return drawnCard;
}