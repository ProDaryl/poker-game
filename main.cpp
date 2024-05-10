#include<iostream>
#include<vector>
#include "Cards.h"
#include "Cards.cpp"
Card card;
std::vector<char> types = {(char)03, (char)04, (char)05, (char)06}; // ASCII code for the various card types

int main() {
    card.Display(10, (char)03);
    return 0;
}