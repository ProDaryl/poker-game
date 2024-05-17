class PokerGame {
public:
    void initializeGame();
    void dealCards();
    void runBettingRound();
    void dealCommunityCards();
    void evaluateHands();
    void determineWinner();
    void resetGame();
};

class Player {
public:
    void bet(int amount);
    void fold();
    void call();
    void raise(int amount);
    void check();
};

class Deck {
public:
    void shuffle();
    Card dealCard();
};

class Hand {
public:
    void addCard(Card card);
    HandStrength evaluateStrength();
};

class UI {
public:
    void displayGameInfo();
    void handleUserInput();
    void updateGameState();
};

// Hand strength enumeration
enum HandStrength {
    HIGH_CARD,
    PAIR,
    TWO_PAIR,
    THREE_OF_A_KIND,
    STRAIGHT,
    FLUSH,
    FULL_HOUSE,
    FOUR_OF_A_KIND,
    STRAIGHT_FLUSH,
    ROYAL_FLUSH
};

// Card struct
struct Card {
    Suit suit;
    Value value;
};
