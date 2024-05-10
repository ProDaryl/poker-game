#include "Cards.h"
#include<vector>
#include<iostream>
#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

class Player {
    protected:
        std::vector<Card> hand;
    public:

        virtual void addCard(Card& card);
};

class HumanPlayer: public Player {
    private:
        std::string Name;
    public:
        HumanPlayer();
        void displayCards();
        std::string getName();
        void addCard(Card& card);
};

void Player::addCard(Card& card) {
    
}


#endif