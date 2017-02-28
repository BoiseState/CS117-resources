// cashRegister.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

using namespace std;

class CashRegister
{
public:
    //
    // Constructors
    //
    CashRegister();
    CashRegister(int count, double amt);


    //
    // Mutators
    //
    void clear();
    void add_item(double price);
    void add_items(double price, int item_count);
    //
    // Accessors
    double get_total() const;

private:
    //
    // data members
    //
    int item_count;
    double total_price;
};

CashRegister::CashRegister()
{
    CashRegister::clear();
}

CashRegister::CashRegister(int count, double amt)
{
    CashRegister::item_count = count;
    CashRegister::total_price = amt;
}

void CashRegister::add_item(double price)
{
    CashRegister::item_count++;
    CashRegister::total_price += price;
}

void CashRegister::add_items(double price, int items)
{
    //for (int i = 0; i < items; i++)
    //	CashRegister::add_item(price);
    CashRegister::total_price = CashRegister::total_price + (price * items);
    CashRegister::item_count += items;
}

double CashRegister::get_total() const
{
    return CashRegister::total_price;
}


void CashRegister::clear()
{
    CashRegister::item_count = 0;
    CashRegister::total_price = 0;
}

int main(int argc, char* argv[])
{
    double currentTransAmount;
    bool isTrue = 0;
    CashRegister cashRegister1;
    CashRegister cashReg2;
    CashRegister cashReg3(10, 47.94);
    cashReg2.clear();
    cashRegister1.clear();
    cashRegister1.add_item(2.99);
    cashRegister1.add_items(5.00, 10);
    currentTransAmount = cashRegister1.get_total();
    cout << "register 1 has a total of: " << currentTransAmount;
    return 0;
}

