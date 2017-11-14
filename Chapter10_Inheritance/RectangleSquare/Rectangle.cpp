//
// Created by DavidThompson on 4/8/2017.
// The implementation of the Rectangle class is incomplete - You must complete it.

#include <iostream>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double h, double l){
    if ( h < 1.0 || l < 1.0) {
        cout << "Height and length must be greater than or equal to 1.0" << endl;
        throw std::range_error("Length must be > 1.0");
    }
    this->length = (l <=1.0 ? 1.0: l);
    this->height = (h <=1.0 ? 1.0: h);
    setArea(h,l);
    setPerimeter(this->height,this->length);
}
void Rectangle::setHeight(double h){
    if ( h < 1.0 ) {
        cout << "Height must be > 1.0," << endl;
        cout << "Height not modified!" << endl;
    }
    else {
        this->height = h;
        setArea(this->height, this->length);
        setPerimeter(this->height,this->length);
    }

}

void Rectangle::setLength(double l){
    if ( l < 1.0 ) {
        cout << "Length must be > 1.0," << endl;
        cout << "Length not modified!" << endl;
    }
    else {
        this->length = l;
        setArea(this->height, this->length);
        setPerimeter(this->height,this->length);
    }
}


double Rectangle::getHeight() const{
    return this->height;
}


double Rectangle::getArea() const{
    return this->area;
}
void Rectangle::setArea(double h, double l){
    this->area = h * l;
}


void Rectangle::printIt() const {
    cout << "The rectangle has the following characteristics:" << endl;
    cout << "\theight = " << this->getHeight() << "\tand length = " << this->getLength() << endl;
    cout << "\tPerimeter = " << this->perimeter << "\tand area = " << this->area << endl;
}
