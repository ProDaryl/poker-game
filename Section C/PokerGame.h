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
    bool hasThreeOfAKind(vector<Card> &hand);
    bool hasStraight(vector<Card> &hand);
    bool hasFlush(vector<Card> &hand);
    bool hasFullHouse(vector<Card> &hand);
    bool hasFiveOfAKind(vector<Card> &hand);
    bool hasStraightFlush(vector<Card> &hand);
    bool hasRoyalFlush(vector<Card> &hand);
    int determineHandType(vector<Card>& combinedhand);
    int winningHandWinningIndex(int& winningHand);
    void determineWinner(const vector<vector<Card>>& playerHands, vector<string>& playerNames, const vector<Card> &computerHand);

    std::vector<Humanplayer *> players;
    Player computer;
};

#endif // POKERGAME_H

