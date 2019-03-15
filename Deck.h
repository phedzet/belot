#ifndef BELOT_DECK_H
#define BELOT_DECK_H

#include "Card.h"
#include <vector>

class Deck
{
public:
    Deck();
    ~Deck();

    void shuffleCards();
    void createDeck();
private:
    std::vector<Card> _cards;
    const int _max_cards = 32;
    const int _max_numbers = 8;
    const int _max_colors = 4;
};

#endif