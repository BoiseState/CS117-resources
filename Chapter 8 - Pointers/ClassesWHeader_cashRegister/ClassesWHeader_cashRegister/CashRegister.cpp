//
// Created on 6/11/2015.
//
#include "CashRegister.h"
#include <iostream>

using namespace std;

//
// end of class definition
// beginning of class implementation
//
void CashRegister::add_item(double price)
{
    //
    //  what is 'this'?
    //
    this->item_count++;
    total_price += price;
}

void CashRegister::add_items(double price, int items)
{
    //
    //  in this mutator, I can manipulate the data members
    //  directly or call 'add_item' multiple times.
    //
    //for (int i = 0; i < items; i++)
    //	CashRegister::add_item(price);
    total_price = total_price + (price * items);
    CashRegister::item_count += items;
}

double CashRegister::get_total() const
{
    return total_price;
}


void CashRegister::clear()
{
    item_count = 0;
    total_price = 0;
}

