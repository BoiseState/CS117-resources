// 05.1IsolateDigitsInNumberGood.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
	Program to Isolate digits in a number.
	For example, if the input is:
		4321
	the output is
		4 in the thousands place
		3 in the hundreds place
		2 in the tens place
		1 in the ones place

    Limitations
        This program, as written will not print out the magnitude
        of digits when they are > one million.  See case statement.
*/
#include <iostream>

using namespace std;

int main()
{
    int tenPower = 0, digit = 0;
    double power = 0.0;
    long long num = 0; // see what happens with int || long
    string listMagnitude = "";
    bool done = false;

    cout << "enter an integer : ";
    cin >> num;
    /*
    determine the number of digits/powers of 10
    */
    while (num / pow(10.0, power) >= 10)
        power++;

    while (num >= 0 && !done)
    {
        /*
        Determine the magnatude of the MS digit and
        isolate this digit
        NOTE: 
            the pow function's parameters are DOUBLES; 
            therefore, we need to 'cast' back to an integer,
            to perform integer math.
        */
        tenPower = static_cast<int>(pow(10.0, power));
        digit = num / tenPower;
        //
        // Print out the digit and magnitude of the digit.
        //
        switch (static_cast<int>(power)) 
        {
        case 0:
            listMagnitude = "One's digit";
            done = true;  // set to exit if on the LSD
            break;
        case 1:
            listMagnitude = "Ten's digit";
            break;
        case 2:
            listMagnitude = "Hundred's digit";
            break;
        case 3:
            listMagnitude = "Thousand's digit";
            break;
        case 4:
            listMagnitude = "Ten Thousand's digit";
            break;
        case 5:
            listMagnitude = "Hundred Thousand's digit";
            break;
        case 6:
            listMagnitude = "Million's digit";
            break;
        default:
            listMagnitude = "Too Big digit";
        }
        cout << digit << " in the " << listMagnitude << "." << endl;
        //
        // remove the most significant digit,
        // reduce our power variable by 1.
        //
        num = num % tenPower;
        power--;
    }
return 0;
}