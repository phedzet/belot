#include "Card.h"

Card::Card(Number number, Color color, int value)
{
    _color = color;
    _number = number;
    _value = 0;
}

Card::~Card()
{

}

void Card::setNumber(Number number)
{
    _number = number;
}

void Card::setColor(Color color)
{
    _color = color;
}

void Card::setValue(int value)
{
    _value = value;
}

Card::Number Card::getNumber()
{
    return _number;
}

Card::Color Card::getColor()
{
    return _color;
}

int Card::getValue()
{
    return _value;
}

std::string Card::numberToString(Number number)
{
    switch (number)
    {
        case  Card::Number::VII:
            return "VII";
        case  Card::Number::VIII:
            return "VIII";
        case  Card::Number::IX:
            return "IX";
        case  Card::Number::X:
            return "X";
        case  Card::Number::J:
            return "J";
        case  Card::Number::Q:
            return "Q";
        case  Card::Number::K:
            return "K";
        case  Card::Number::A:
            return "A";
    }
}

std::string Card::colorToString(Color color)
{
    switch(color)
    {
        case Card::Color::Clubs:
            return "Clubs";
        case Card::Color::Diamonds:
            return "Diamonds";
        case Card::Color::Spades:
            return "Spades";
        case Card::Color::Hearts:
            return "Hearts";
    }
}