#include <iostream>
#include "PokerGame.h"
#include "Deck.h"
#include <algorithm>
using namespace std;
PokerGame::PokerGame()
{
}

void PokerGame::play()
{
    int numPlayers;
    do
    {
        prompt();
        cin >> numPlayers;
        if (numPlayers < 1 || numPlayers > 4)
        {
            maxPlayerserr();
        }
        cin.ignore();
    } while (numPlayers < 1 || numPlayers > 4);
    Deck casino;
    casino.shuffle();
    for (int i = 0; i < numPlayers; ++i)
    {
        string playerName;
        cout << "Enter name of player" << i + 1 << " :";
        getline(cin, playerName);
        Humanplayer *player = new Humanplayer(playerName);

        // Deal 3 cards to each player
        for (int j = 0; j < 3; ++j)
        {
            player->addCard(casino.drawCard());
        }

        players.push_back(player);
    }

    for (int i = 0; i < 3; ++i)
    {
        computer.addCard(casino.drawCard());
    }

    for (Humanplayer *playerPtr : players)
    {

        cout << "Player: " << playerPtr->getName() << endl;
        playerPtr->displayCards();
        cout << endl;
    }
    
    for (Humanplayer *playPtr : players)
    {
        delete playPtr;
    }
}

void PokerGame::prompt()
{
    cout << "How many players are there? " << endl;
}

void PokerGame::maxPlayerserr()
{
    cout << "Maximum number of players = 3, Minimum = 1" << endl;
}

bool PokerGame::hasPair(std::vector<Card> &hand) {
    // Implement hasPair logic
    return false;
}

bool PokerGame::hasTwoPairs(std::vector<Card> &hand) {
    // Implement hasTwoPairs logic
    return false;
}

bool PokerGame::hasThreeOfAKind(std::vector<Card> &hand) {
    // Implement hasThreeOfAKind logic
    return false;
}

bool PokerGame::hasStraight(std::vector<Card> &hand) {
    // Implement hasStraight logic
    return false;
}

bool PokerGame::hasFlush(std::vector<Card> &hand) {
    // Implement hasFlush logic
    return false;
}

bool PokerGame::hasFullHouse(std::vector<Card> &hand) {
    // Implement hasFullHouse logic
    return false;
}

bool PokerGame::hasFiveOfAKind(std::vector<Card> &hand) {
    // Implement hasFiveOfAKind logic
    return false;
}

bool PokerGame::hasStraightFlush(std::vector<Card> &hand) {
    // Implement hasStraightFlush logic
    return false;
}

bool PokerGame::hasRoyalFlush(std::vector<Card> &hand) {
    // Implement hasRoyalFlush logic
    return false;
}

int PokerGame::determineHandType(std::vector<Card> &combinedHand) {
    // Implement determineHandType logic
    return 0;
}

int PokerGame::winningHandWinningIndex(int &winningHand) {
    // Implement winningHandWinningIndex logic
    return 0;
}

void PokerGame::determineWinner(const std::vector<std::vector<Card>> &playerHands,
                                std::vector<std::string> &playerNames,
                                const std::vector<Card> &computerHand) {
    // Implement determineWinner logic
}
