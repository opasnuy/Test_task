#include <iostream>
#include <math.h>
#include "figure.h"
#include <string>
#include <square.h>
#include <triangle.h>
#include <circle.h>
#include <trapeze.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int i = rand()%15+1;
    string colorArray [8] = {
        "red", "orange", "yellow", "green", "blue", "black", "brown", "pink"
    };

    Figure *shapes[i];
    for (int j = 0; j < i; ++j) {

        switch(rand()%4)
        {
            case 0:
                shapes[j] = new Circle(rand()%5+1,colorArray[rand()%8]);
                 break;
            case 1:
                shapes[j] = new Square(rand()%7+1,colorArray[rand()%8]);
                 break;
            case 2:
                shapes[j] = new Triangle(rand()%3+1,rand()%5+1,rand()%6+1,colorArray[rand()%8]);
                 break;
            case 3:
                shapes[j] = new Trapeze(rand()%2+1,rand()%4+1,rand()%6+1,colorArray[rand()%8]);
                 break;

        }
    }

    for (int j = 0; j < i; ++j) {
        cout << "Figure:"
                  << shapes[j]->getName()
                  << ", area:"
                  << shapes[j]->area()
                  << ", color:"
                  << shapes[j]->getColor();


    if (shapes[j]->getName() == "Circle") {
          cout << ", radius:" << ((Circle *)shapes[j])->getRadius();

    } else if (shapes[j]->getName() == "Square") {
          cout <<", side:" << ((Square *)shapes[j])->getSide();

        } else if (shapes[j]->getName() == "Triangle") {
          cout << ", half perimeter:" << ((Triangle*)shapes[j])->getHalfPerimeter();

            } else if (shapes[j]->getName() == "Trapeze") {
              cout << ", height:" << ((Trapeze*)shapes[j])->getHeight();
    }

   cout<<endl;
}
    for (int j = 0; j < i; ++j)
        delete shapes[j];

    return 0;
}
