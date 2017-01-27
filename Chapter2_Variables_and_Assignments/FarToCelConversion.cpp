// FtoCConversion.cpp : This program will convert Farenheit to Celcius.
// This 'code' will be used to discuss Ch 2  of C++ for everyone
//

#include <iostream> // always include
#include <iomanip>  // needed for setprecision & setw
#include <math.h>
using namespace std;

const double FAR_BOILING_POINT = 212.0;
const double FAR_FREEZING_POINT = 32.0;

int main()
{
    int ctr = 5, value;
    double inputTemp, convertedTemp;
    string sample, temp1, temp2;

    value = pow(ctr, 5);                                         // What's wrong with this?
    cout << "ctr^5 ==" << value << endl;


    cout << "You know, the boiling point of water is " << FAR_BOILING_POINT << " in Fahrenheit." << endl;
    cout << "This program will convert a Celsius # to a Fahrenheit #..." << endl;
    cout << "Please enter a  Celsius: ";
    cin >> inputTemp;
    cout << fixed  << setprecision(2);                               // only state once
    // F = C*9/5+32
    convertedTemp = inputTemp * 9/5 + 32;
    cout << setw(20);                                                // must state BEFORE each value you want printed
    cout << "The input temp, " << inputTemp << "C is " << setw(10)<< convertedTemp << "F." << endl;
    return 0;
}

