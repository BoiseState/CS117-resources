//
// This program computes the area of a rectangle
//
#include <iostream>

using namespace std;

int main()
{
    double length, width;
    double area;
    string yesSir = "Yes sir, whatever you say";

    cout << "Enter the length of the rectangle: \n";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = length * width;

    cout << "The area of the rectangle is: " << area << "." << endl;

    return 0;
}
