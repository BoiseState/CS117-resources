////////////////////////////////////////////////////////////////////
//NAME:
//		A Great Student Programmer
//CLASS:
//		CS117
//PROJECT AND TITLE:
//		Unit 4 Assignment, "Fibonacci"
//DATE:
//		November 2, 2011
//DESCRIPTION:
//		A program to generate numbers in Fibonacci sequence.
//ASSUMPTIONS AND LIMITATIONS:
//		Whole numbers only. Nothing less than 1. Assured to do up
//		to 1000000000, before displaying a negative number.
///////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{


    int a = 1, b = 1;
    int c;
    bool first = true;
    int Number;


    cout << "Enter a number: ";
    cin >> Number;
    cout << "The Fibonacci sequence up to " << Number << " is: " << endl;


    while (a <= Number) {
        c = a + b;
        if (first) {
        cout << a;
        first = false;
        }
        else
            cout << ", " << a;
        a = b;
        b = c;
    }
    cout << endl;

  }
