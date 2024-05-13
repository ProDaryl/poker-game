#ifndef POKERGAME_H
#define POKERGAME_H
#include <vector>
#include <string>
#include "Cards.h"
#include "Player.h"
#include "Humanplayer.h"
using namespace std;
class PokerGame {
public:
    PokerGame();
    void play();
private:
    void prompt();
    void maxPlayerserr();
    bool hasPair(vector<Card> &hand);
    bool hasTwoPairs(vector<Card> &hand);
    bool hasThreeofAKind(vector<Card> &hand);
    bool hasStraight(vector<Card> &hand);
    bool hasFlush(vector<Card> &hand);
    bool hasFullHouse(vector<Card> &hand);
    bool hasFiveofAKind(vector<Card> &hand);
    bool hasStraightFlush(vector<Card> &hand);
    bool hasRoyalFlush(vector<Card> &hand);
    string determineWinner(const vector<Card> &player1hand, const vector<Card> &player2hand, const vector<Card> &computerHand);

    std::vector<Humanplayer *> players;
    Player computer;
};

#endif // POKERGAME_H

