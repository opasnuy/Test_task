#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure
{
public:
    Figure();

protected:
    std::string color;
    std::string name;

public:
    virtual double area();
    virtual double draw();

    std::string getColor();
    std::string getName();
};

#endif // FIGURE_H
