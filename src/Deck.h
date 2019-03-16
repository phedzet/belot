#ifndef BELOT_DECK_H
#define BELOT_DECK_H

#include "Card.h"
#include <vector>

class Deck
{
public:
    // ctor and dtor
    Deck();
    ~Deck();

    // public functions
    void shuffleCards();
    void createDeck();
    std::vector<Card> getCards();
private:
    // member variables
    std::vector<Card> _cards;
    const int _max_cards = 32;
    const int _max_numbers = 8;
    const int _max_colors = 4;
};

#endif