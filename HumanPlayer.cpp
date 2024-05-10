#include "Cards.h"
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer() {}

void HumanPlayer::displayCards() {
    std::cout << "Player " << Name << "'s hand:" << std::endl;
    for (Card& card : hand) {
        card.Display(card.getNumber(), card.getType()); 
    }
}

void HumanPlayer::addCard(Card &card)
{
    
}
