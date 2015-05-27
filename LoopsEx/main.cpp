// Chapter4_Ex_Loops4Class.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
	int i, j, k;
	char ans;
	//
	// while loop
	//
	j = 0; i = 0;
	cout << "Here is a simple \"while\" loop" << endl;
	cout << "Every while loop needs a way to stop" << endl;
	cout << "In this case, when i hits 100, the loop will stop." << endl;
	cout << "We always have to make sure we \"can\"/\"will\" exit the loop" << endl;
	while(i < 100)
	{ 
		j += i;
		i++;
		cout << "i = " << i << " j = " << j << endl;
	}

	i = 42;
	cout << "A useful while loop..." << endl;
	cout << "Enter the sex of the viewer (\"M\" or \"F\"): ";
	cin >> ans;
	while (ans != 'M' && ans != 'F')
	{
		cout << "Error in Input...Enter the sex of the viewer (\"M\" or \"F\"): ";
		cin >> ans;
	}
	cout << "You entered \"" << ans << "\"," << endl;
	cout << "Note if M or F was entered right away, we would never enter the loop..." << endl;
	cout << endl << "another useful while loop...." << endl;
	double tempF, tempC; 
	cout << "Enter the farenheit temp or \"-1\" to quit: ";
	cin >> tempF;
	while (tempF != -1.0)
	{
		tempC = (tempF - 32) * 5 / 9;
		cout << endl << tempF << "F = " << tempC << "C." << endl;
		cout << "Enter the farenheit temp or \"-1\" to quit: ";
		cin >> tempF;
	}
	cout << "Not the best way to exit the above loop as -1 can be a valid temperature..." << endl;
	//
	// for loop
	//
	j = 0;
	cout << "With a \"for\" loop, we needent worry about the loop count, as it is built in..."  << endl;
	for (int i = 0; i < 100; i++)
	{
		j += i;
		cout << "i = " << i << " j = " << j << endl;
	}
	//
	// what is 'i'
	//
	cout << "What is i's scope?  Scoping is an important concept to get..." << endl;
	cout << "When a variable is \"in scope\", you can update and manipulate it" << endl;
	cout << "What determines scope - refer to the text or discover it \"on-line\"" << endl;
	cout << "What is i?  hit any key to find out...";
	cin >> ans;
	cout << "i = " << i << endl;

	//
	// repeat until loop / do while loop
	// what's the difference between this loop and the "while" loop?
	//
	cout << "Here is a repeat-until loop or a \"do\" loop"   << endl;
	cout << "The difference between this loop and a \"while\" loop is based on one key event" << endl;
	cout << "\ta \"while\" loop executes 0 or more times.  a \"do\" loop executes at LEAST 1 time" << endl;
	do
	{
		cout << "Enter the sex of the viewer (\"M\" or \"F\"): ";
		cin >> ans;
	} while ((ans != 'M' && ans != 'F'));
	cout << "You entered \"" << ans << "\"," << endl;
	//
	// a practical example; similar to what's in book
	//
	cout << "Here is a practical example of when to use a \"for\" loop..." << endl;
	cout << "\tInterest compounds yearly. Not on the starting balance, but the accumulation" << endl;
	cout << "\tof the starting balance + each years interest" << endl;
	cout << "For example" << endl;
	cout << "We want to see how much an initial investment of $1000 is after 10 years compounded annually..." << endl;
	const double INITIAL_INVESTMENT = 1000.00;
	const double RATE = .05;  // the interest rate
	double balance = INITIAL_INVESTMENT; // our starting investment
	int years = 10;
	for (j = 0; j < years; j++)
	{
		balance = balance * 1.05;
		cout << "Year " << i << ", current balance: $" << balance << endl;
	}
	cout << " In " << years << " years, your $" << INITIAL_INVESTMENT << " has grown to $" << balance << " at " << 
		RATE << " interest rate." << endl;

	cout << endl << endl << "Random # fun..." << endl << endl;
	cout << "Random or Psuedo-random numbers play a huge role in computers"  << endl;
	cout << "Scientists are always attempting to \"simulate\" the real world or randomness"  << endl;
	cout << "Computers can be truly random by they can come close..." << endl;
	cout << "Without a \"seed\", each time we run a random number generator, we would get the same sequence" << endl;
	cout << "of numbers.  The best way to create a seed, is by the current time, as it will never occur again" << endl;
	srand(int(time(0)));  // make it more random based on a seed

	cout << "Get random # > X and <= Y" << endl;
	int X = 40; int Y = 50;
	for (int i = 0; i < 10; i++)
	{
		int randomNumber = rand();  //get some random #
		randomNumber = randomNumber % (Y - X + 1) + X;
		cout << "Random # == " << randomNumber << endl;
	}
	return 0;
}

