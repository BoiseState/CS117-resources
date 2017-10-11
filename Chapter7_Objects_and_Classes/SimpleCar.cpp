// Car.cpp : Defines the entry point for the console application.
// This defines the 'car' class and contains the 'main' program all in
// one file.  Normally, this is not done, as we shall see in subsequent
// examples...

#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;

class Car
{
public:
	/**
		Constructor for a 'car' object.  The efficiency in mpg is 
		passed to the constructor.
	**/
	Car(double efficiency);
    /**
        Another constructor for a 'car' object.  All initial data member values are
        passed to the constructor.
    **/
	Car(double efficiency,double gasAmt, double odometerReading);

	/**
	 The mutators appear below
	    you can tell it's a mutator by the 'void', we are passing a parameter, and
	    we see the word 'set' in the function name.
		set the efficiency.
	**/
	void set_mpg(double mpg);
    /**
        add 'amt' of gas in gallons.
    **/
	void add_gas(double amt);
	/**
		drive the number of miles passed in.
		update the miles_driven for the car and the amount
		of gas used.
	**/
	void drive(double miles);

	/**
	 The accessors appear below
	    you can tell it's an accessor by the return value and we see the word 'get' in
	    the function name
		Return the amount of gas still in this car
	**/
	double get_gas_amount() const;
	/**
		Return the miles driven by this car
	**/
	double get_miles_driven() const;
    /**
        Return the efficiency.
    **/
    double get_mpg() const;



private:
	/**
		Data members to store...
	**/
	double mpg;
	double miles_driven = 0;
	double gas_amount = 0;
};
//
// the constructor should always initialize all private data members even if we do not pass in parameters...
//
Car::Car(double efficiency) {
	this->mpg = efficiency;
    this->gas_amount=0;
    this->miles_driven=0;
}
//
// this constructor sets all the data members...
//
Car::Car(double efficiency,double gasAmt, double odometerReading){
	this->mpg = efficiency;
	this->gas_amount = gasAmt;
	this->miles_driven = odometerReading;
}
//
// void indicates this is a mutator or setter
//
void Car::set_mpg(double mpg) {
	this->mpg = mpg;
}

void Car::add_gas(double amt) {
	gas_amount += amt;
}

double Car::get_gas_amount() const {
	return this->gas_amount;
}

double Car::get_miles_driven() const {
	return this->miles_driven;
}

double Car::get_mpg() const {
    return this->mpg;
}

void Car::drive(double miles) {
	this->gas_amount -= miles / this->mpg;
	this->miles_driven += miles;
}
int main(int argc, char* argv[])
{
	Car myHybrib(50);            // instantiate a car object (bring the object to life) setting only the mpg
    Car myHybrid2(75,20,50000);  // instantiate a car object setting mpg, gas_amount, and current miles driven - miles_driven
    myHybrib.add_gas(20);        // access the function of a class by specifying the object name
    myHybrib.set_mpg(75);        //      followed by a '.' followed by the function name.
	myHybrib.drive(100);
	cout << "You have driven " << myHybrib.get_miles_driven() << " miles." << endl;
	cout << "You have " << myHybrib.get_gas_amount() << " gallons of gas left." << endl;
    cout << endl << "You have bought a used car.  This car has the following attributes:" << endl;
    cout << "\tEfficiency:\t\t" << myHybrid2.get_mpg() << " mpg." << endl;
    cout << "\tGas in Tank:\t\t" << myHybrid2.get_gas_amount() << " gallons." << endl;
    cout << "\tOdometer reading:\t" << myHybrid2.get_miles_driven() << " miles." << endl;
	return 0;
}

