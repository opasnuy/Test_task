#include "triangle.h"

#include <math.h>
#include <string>

using namespace std;

Triangle::Triangle(double a,double b, double c, std::string color)
{

    this->a=a;
    this->b=b;
    this->c=c;
    this->p=p;
    this->color = color;
    name = "Triangle";

}

    double Triangle::area()
{
        p=(a+b+c)/2.0;
    return  sqrt((p*(p-a)*(p-b)*(p-c)));
}

    double Triangle::draw()
{
}



    double Triangle::getHalfPerimeter()
{
    return p;
}
