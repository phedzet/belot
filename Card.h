#ifndef BELOT_CARD_H
#define BELOT_CARD_H

#include <iostream>
#include <Inlines.h>

class Card
{
public:
    // enum classes
    enum class Number { Begin, VII = Begin, VIII, IX, X, J, Q, K, A, End };
    enum class Color { Begin, Hearts = Begin, Clubs, Diamonds, Spades, End };

    // ctor and dtor
    Card(Number number, Color color, int value = 0);
    ~Card();

    // public getters
    Color getColor();
    Number getNumber();
    int getValue();

private:
    // member variables
    Number _number;
    Color _color;
    int _value;

    // private setters
    void setColor(Color color);
    void setNumber(Number number);
    void setValue(int value);
};

#endif