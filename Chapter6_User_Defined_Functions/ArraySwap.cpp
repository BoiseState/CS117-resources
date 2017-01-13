// ArraySwap.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;
//
// Set the array to known values, in this case Zeros (0)
//
void clearArray(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		array[i] = 0;

}
//
// count how many 'special' numbers there are in the array
// and RETURN the count to the caller
//
int countSpecial(int array[], int specialNumber, int size)
{
	int i;
	int counter = 0;

	for (i = 0; i < size; i++) {
		if (array[i] == specialNumber) {
			counter++;
		}
	}
	return counter;
}
//
// print the contents of the 'passed' array
//  This function will only print out an Integer array
//  of size 'size' and return NOTHING to the caller.
//
void printArray(int array[], int size)
{
	int i;

	for (i = 0; i < size; i++) {
		if (i == 0) {
			cout << array[i];
		}
		else {
			cout << ", " << array[i];
		}
	}
	cout << endl;

}
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
	printArray(numbers, MAXSIZE);

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
	//      how about we use functions?
	//
	//  I wrote the 'repeated code' / function once and then I can 'call' the function
	//  multiple times, thus reducing the chance of errors and reducing the time required
	//  to write my program.
	//
	cout << endl << endl << "The contents of \"numbers\" after swapping is: ";
	printArray(numbers, MAXSIZE);
	//
	// count how many '20's are in the array...
	//
	int twenties = countSpecial(numbers, 20, MAXSIZE);
	cout << endl << endl << "There are " << twenties << " 20's in the array" << endl;

	return 0;
}