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