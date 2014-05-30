#include "trapeze.h"

#include <string>


Trapeze::Trapeze(double a = 1, double b=2, double h=1, std::string color = "black")
{
    this->a=a;
    this->b=b;
    this->h=h;
    this->color=color;
    name = "Trapeze";

}

double Trapeze::area()
{
    return ((0.5*(a+b))*h);
}

double Trapeze::draw()
{

}


double Trapeze::getHeight()
{
    return h;
}
