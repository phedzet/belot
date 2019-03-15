#include "Deck.h"
#include "iostream"

Deck::Deck()
{

}

Deck::~Deck()
{

}

void Deck::createDeck()
{
    for(Card::Number i = Card::Number::Begin; i != Card::Number::End; ++i)
    {
        for(Card::Color j = Card::Color::Begin; j != Card::Color::End; ++j)
        {
            Card card(i, j, 0);
            //std::cout << "created card " << i << " " << j << std::endl;
            _cards.push_back(card);
        }
    }
}