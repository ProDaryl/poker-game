#include<iostream>
#include<vector>
#include "Cards.h"
#include "Cards.cpp"
Card card;
char heart = 3, diamond = 4, clubs = 5, spades = 6;

int main() {
    card.Display(1, heart);
    return 0;
}