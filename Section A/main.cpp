#include<iostream>
#include<vector>
#include "Cards.h"
using namespace std;

char convertT(string type) {
    if(type == "heart") {
        return 3;
    }
    else if (type == "diamond") {
        return 4;
    }
    else if (type == "clubs") {
        return 5;
    } 
    else if (type == "spades") {
        return 6;
    } 
}
int num; 
string type;

int main() {
    cout <<"Enter the card number";
    cin>>num;
    cout <<endl<<"Enter the card type: ";
    cin >>type;
    Card card = Card(num, convertT(type));
    card.Display();
    return 0;
}