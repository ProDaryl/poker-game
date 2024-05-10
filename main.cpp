#include<iostream>
#include<vector>
#include "Cards.h"
#include "Cards.cpp"
std::vector<Card> deck;
std::vector<char> suits = {(char)03, (char)04, (char)05, (char)06};
void createDeck() {
    for (int num = 0; num <= 13; num++) {
        for(char suit : suits) {
            deck.push_back(Card(num, suit));
        }
    }
}

void displayDeck() {
    for(Card& card : deck) {
        card.Display();
    }
}

int main() {
 
    createDeck();
    displayDeck();
    return 0;
}