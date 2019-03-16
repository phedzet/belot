#include "Deck.h"
#include "iostream"
#include <algorithm>
#include <random>

Deck::Deck()
{
    createDeck();
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
            _cards.push_back(card);
            std::cout << "entered here" << std::endl;
        }
    }
}

void Deck::shuffleCards()
{
    std::cout << "todo" << std::endl;
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(_cards), std::end(_cards), rng);
}

std::vector<Card> Deck::getCards()
{
    return _cards;
}