#include <iostream>
#include "Player.h"
#include "Cards.h"
using namespace std;
void Player::addCard(const Card &card) // adds cards to players
{
    hand.push_back(card);
}
vector<Card> &Player::getHand()// gets the cards a player has
{ 
    return hand;
}