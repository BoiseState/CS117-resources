// cashRegister.cpp : Defines the entry point for the console application.
// Example from:
//      c++ for everyone
//      by: Cay S. Horstmann
//      Chapter 9
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//
// here is the definition
//  of CashRegister
// the implementation follows...
//
class CashRegister
{
public:
	//
	// remember:
	//  Mutators will change the data members
	//  Accessors will only 'retrieve' data members
	//
	//  How do we tell the difference between an
	//  Accessor and a mutator?
	//
	void clear();
	void add_item(double price);
	void add_items(double price, int item_count);
	double get_total() const;

private:
	//
	//  Data members should all be in 'private' area.
	//  Each CashRegister 'object' gets its own copy of
	//  these data members.
	//
	int item_count;
	double total_price;
};
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