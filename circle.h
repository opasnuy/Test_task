#ifndef CIRCLE_H
#define CIRCLE_H

#include <figure.h>
#include <string>

class Circle: public Figure
{
public:
    Circle( double r, std::string color);
    virtual double area();
    virtual double draw();

    double getRadius();

private:
    double r;


};

#endif // CIRCLE_H
