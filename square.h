#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"
#include <string>

class Square: public Figure
{
private:
    double a;


public:
    Square(double a , std::string color);
    double getDiagonal ();
    virtual double area();
    virtual double draw();
    double getSide();
};

#endif // SQUARE_H



