//
// Created on 6/11/2015.
// To create the header file, you can follow these steps:
//  1. in help, click 'Find Action'
//  2. enter "create header file"
//  3. select "C/C++ Header File"
//  4. name the header file to the file you'd like
//  OR
//  1. right click your c++ program on the left
//  2. select "C/C++ Header File"
//  3. name the header file to the file you'd like
//
//  the header file will be created and the project will be
//  updated.
//

#ifndef CASHREGISTER_H
#define CASHREGISTER_H

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
#endif //CASHREGISTER_H
