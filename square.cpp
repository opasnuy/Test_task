#include "square.h"
#include "math.h"


Square::Square(double a,  std::string color = "blue")
{
    this->a = a;
    this->color = color;
    name = "Square";
}

double Square::getDiagonal()
{
    return pow(a, 0.5);
}

double Square::area()
{
    return pow(a, 2);
}

double Square::draw()
{

}

double Square::getSide()
{
    return a;
}
