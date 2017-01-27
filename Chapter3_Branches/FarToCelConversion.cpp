// FtoCConversion.cpp : This program will convert Farenheit to Celcius.
// This 'code' will be used to discuss Ch 2  of C++ for everyone
//

#include <iostream> // always include
#include <iomanip>  // needed for setprecision & setw
#include <math.h>    // needed for 'pow'

using namespace std;

const double FAR_BOILING_POINT = 212.0;
const double FAR_FREEZING_POINT = 32.0;

int main()
{
    int ctr, value;
    double inputTemp, convertedTemp;
    string sample, temp1, temp2;

    value = pow(ctr, 5);                                         // What's wrong with this?
    cout << "ctr^5 ==" << value << endl;

    int select = 0;
    sample = "Please";
    temp1 = "from the following:";
    temp2 = "select";
    sample = sample + " select" + temp2;
    temp2 = sample.substr(0, 13) + temp1;                                 // What did we do to temp2?

    cout << "You know, the boiling point of water is " << FAR_BOILING_POINT << " in Fahrenheit." << endl;
    cout << "Please enter a value you wish to convert from C to F or F to C: ";
    cin >> inputTemp;
    cout << temp2 << endl;
    cout << "1) Fahrenheit-to-Celsius" << endl;
    cout << "2) Celsius-to-Fahrenheit" << endl << endl;
    cout << "Enter: ";
    cin >> select;
    //
    // cout << fixed << scientific << setprecision(2);               // only state once
    cout << fixed  << setprecision(2);                               // only state once
    if (select == 1)
    {
        // C = (F-32) * 5/9
        convertedTemp = (inputTemp - 32) * 5/9;
        cout << setw(20);                                                // must state BEFORE each value you want printed
        cout << "The input temp, " << inputTemp << "F is " << convertedTemp << "C." << endl;
    }
    else
    {
        // F = C*9/5+32
        convertedTemp = inputTemp * 9 / 5 + 32;

        cout << setw(20);                                                // must state BEFORE each value you want printed
        cout << "The input temp, " << inputTemp << "C is " << convertedTemp << "F." << endl;
    }

    return 0;
}

