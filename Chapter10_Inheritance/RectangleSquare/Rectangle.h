//
// Created by DavidThompson on 4/8/2017.
//

#ifndef RECTSQUARE_RECTANGLE_H
#define RECTSQUARE_RECTANGLE_H

class Rectangle {


public:
    Rectangle(double h, double l);

    void setHeight(double h);
    void setLength(double l);

    double getHeight() const;
    double getLength() const;
    double getPerimeter() const;
    double getArea() const;
    void printIt() const;
    std::string getColor() const;

private:
    //
    // setColor is 'private'.  This will NOT work for
    // derived classes, so what needs to change?
    //
    void setArea(double h, double l);
    void setPerimeter(double h, double l);
    void setColor(std::string color);


    double height, length;
    double area;
    double perimeter;
    std::string color;

};


#endif //RECTSQUARE_RECTANGLE_H
