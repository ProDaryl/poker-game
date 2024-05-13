#include<iostream>
#include<vector>
#include "Cards.h"
#include "Cards.cpp"
char heart = 3, diamond = 4, clubs = 5, spades = 6;
Card card = Card(1, heart);

int main() {
    card.Display();
    return 0;
}