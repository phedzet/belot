#include <iostream>
#include <memory>
#include "Deck.h"

int main()
{
    auto deck = std::make_unique<Deck>();

    Card::Number number1 = deck->getCards().front().getNumber();
    Card::Color color1 = deck->getCards().front().getColor();
    Card card1 = deck->getCards().front();
    std::string output1 = card1.numberToString(number1);
    std::string output2 = card1.colorToString(color1);

    std::cout << output1 << " " << output2 << std::endl;

    deck->shuffleCards();

    Card::Number number2 = deck->getCards().front().getNumber();
    Card::Color color2 = deck->getCards().front().getColor();
    Card card2 = deck->getCards().front();
    std::string output3 = card1.numberToString(number2);
    std::string output4 = card1.colorToString(color2);

    std::cout << output3 << " " << output4 << std::endl;

    return 0;
}