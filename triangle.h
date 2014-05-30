#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <figure.h>
#include <string>
class Triangle: public Figure
{
public:
    Triangle(double a, double b, double c, std::string color);
    virtual double area();
    virtual double draw();

    double getHalfPerimeter();

private:
        double a;
        double b;
        double c;
        double p;


};

#endif // TRIANGLE_H
