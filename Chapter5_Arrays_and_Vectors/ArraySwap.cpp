// ArraySwap.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	const int MAXSIZE = 25;
	int i, j, temp;
	//
	// When we initialize the array and we do NOT initialize all elements, what happens...
	//
	//	int numbers[MAXSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	int numbers[MAXSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	//	int numbers[MAXSIZE] = { 1, 2, 3, 4};

	//
	// array indexes always start with 0.  The last element is always size - 1
	//
	cout << "The contents of \"numbers\" before swapping is: ";
	for (i = 0; i < MAXSIZE; i++) {
		if (i == 0) {
			cout << numbers[i];
		}
		else {
			cout << ", " << numbers[i];
		}
	}
	cout << endl;

	i = 0;
	j = MAXSIZE - 1;
	while (i < j) {
		temp = numbers[j];
		numbers[j] = numbers[i];
		numbers[i] = temp;
		i++;
		j--;
	}
	//
	//  Compare the following loop with the one above, on lines 24-31...
	//      what are the differences?
	//      if we had to display the array throughout the program, we would repeat
	//      the same code over and over again.
	//
	//  There must be a better way?!?!?!
	//      stay tuned..
	//
	cout << endl << endl << "The contents of \"numbers\" after swapping is: ";
	for (i = 0; i < MAXSIZE; i++) {
		if (i == 0) {
			cout << numbers[i];
		}
		else {
			cout << ", " << numbers[i];
		}
	}
	cout << endl;

	return 0;
}