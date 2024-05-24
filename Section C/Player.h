#if !defined(PLAYER_H)
#define PLAYER_H
#include <iostream>
#include <vector>
#include "Cards.h"
using namespace std;
class Player
{
protected:
    vector<Card> hand;
public:
    void addCard(const Card& card);
    vector<Card>& getHand();
};
#endif // PLAYER_H
