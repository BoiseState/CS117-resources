// cashRegister.cpp : Defines the entry point for the console application.
// Example from:
//      c++ for everyone
//      by: Cay S. Horstmann
//      Chapter 9
//

#include "CashRegister.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    double currentTransAmount;
    CashRegister cashRegister1;
    CashRegister cashReg2;
    cashReg2.clear();
    cashRegister1.clear();
    cashRegister1.add_item(2.99);
    cashRegister1.add_items(5.00, 10);
    currentTransAmount = cashRegister1.get_total();
    cout << "register 1 has a total of: " << currentTransAmount;
    return 0;
}

