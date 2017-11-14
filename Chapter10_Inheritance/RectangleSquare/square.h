//
// Created by DavidThompson2 on 4/11/2017.
//

#ifndef MYRECTANGLESQUARE_SQUARE_H
#define MYRECTANGLESQUARE_SQUARE_H

#include "Rectangle.h"

class Square:public Rectangle {
public:
    Square(double length);

    double getLength() const;
    void setLength(double length);
    void changeColor(std::string color);

    void printIt() const;



private:
};


#endif //MYRECTANGLESQUARE_SQUARE_H
