#ifndef TRAPEZE_H
#define TRAPEZE_H

#include <figure.h>
#include <string>

class Trapeze: public Figure
{

public:
    Trapeze(double a, double b, double h, std::string color);
    virtual double area();
    virtual double draw();
    double getHeight();

private:
    double a;
    double b;
    double h;

};

#endif // TRAPEZE_H
