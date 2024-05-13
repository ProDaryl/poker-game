#include <iostream>
#include "Humanplayer.h"
#include "Cards.h"
#include "Player.h"
using namespace std;

Humanplayer::Humanplayer(const string &playerName) : Player()
{
    name = playerName; // Initialize the name
}

void Humanplayer::displayCards()
{
    for (Card &card : hand)
    {
       card.Display();//Calling the display function of the card class
    }
}