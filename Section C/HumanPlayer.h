#if !defined(HPLAYER_H)
#define HPLAYER_H
#include <iostream>
//signifies the human players in the game
#include "Player.h"
#include "Cards.h"
using namespace std;
class Humanplayer:public Player
{
private:
    string name;
public:
    string getName(){return name;}
    Humanplayer(const string& name);
    void displayCards();
};
#endif // HPLAYER_H