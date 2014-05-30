#include "circle.h"

#include "string"
#include <math.h>

Circle::Circle(double r, std::string color)
{
    this->r=r;
    this->color = color;
    name = "Circle";

}
double Circle::area()
{
    return M_PI * pow(r,2);
}

double Circle::draw()
{

}


double Circle::getRadius()

{
    return r;
}
