// PointerMaxArray.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

const int SIZE = 6;

int main(int argc, char * argv[])
{
	int anArray[SIZE] = { 3, 4, 2, 48, 44, 7 };
	//
	// what does arrayPtr point to?
	//
	int *arrayPtr = anArray;
	//
	// what does max point to?
	//
	int max = *arrayPtr;
	int aNumber;
	//
	// what is the address of max and anArray?
	//
	cout << "Address of max = " << &max << endl;
	cout << "Address of aNumber = " << &aNumber << endl;
	cout << "Address of anArray = " << &anArray << endl;
	//
	// what does is max and what does arrayPtr point to?
	//
	cout << "max = " << max << endl;
	//
	// which is also...
	//
	cout << "arrayPtr points to " << arrayPtr <<
			" and has a value of "<< *arrayPtr << endl;
	//
	// why do we start at 1 here?..
	//
	for (int i = 1; i < SIZE; i++)
	{
		if (*arrayPtr > max)
			max = *arrayPtr;
		arrayPtr++;
		//
		// Now, what is in arrayPtr?...
		//
		cout << "arrayPtr points to " << arrayPtr <<
		" and has a value of "<< *arrayPtr << endl;
		system("pause");

	}
	cout << "Max value in Array is " << max << endl;
	return 0;
}