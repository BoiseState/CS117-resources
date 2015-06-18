// SortingAnd2DArrays.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

using namespace std;

const int MAXROWS = 5;
const int MAXGRADES = 5;

void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            cout << array[i];
        }
        else {
            cout << ", " << array[i];
        }
    }
    cout << endl;
}
//
// Contrast this with bubbleSort2.  What is the major difference?
//
void bubbleSort1(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }

}

void bubbleSort2(int array[], int size)
{
    int i = 0;
    bool swapped = true;

    while (swapped)
    {
        swapped = false;
        i++;
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
    }
}
//
// See note on page 284 of textbook for passing a 2-D array.
//
void printGrades(string names[], double grades[][MAXGRADES])
{
    for (int i = 0; i < MAXROWS; i++)
    {
        cout << "Student: " << names[i] << ", grades - " << endl << "\t";
        for (int j = 0; j < MAXGRADES; j++)
        {
            if (j == 0)
                cout << grades[i][j];
            else
            {
                cout << ", " << grades[i][j];
            }
        }
        cout << endl << endl;
    }
}

int main(int argc, char* argv[])
{
    const int MAXSIZE = 25;
    int i, j, temp;
    //
    // what happens if I set 'numbers' to a type of double...
    //         I get a lot of red squigglies, but why?
    //
    //	int numbers[MAXSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int numbers[MAXSIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
    // int numbers[MAXSIZE] = { 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    //	int numbers[MAXSIZE] = { 1, 2, 3, 4};

    cout << "Let's swap the First element with the last, then the 2nd with the 2nd to last, etc..." << endl;
    cout << "The contents of \"numbers\" before swapping is: " << endl;
    displayArray(numbers, MAXSIZE);

    i = 0;
    j = MAXSIZE - 1;
    while (i < j) {
        temp = numbers[j];
        numbers[j] = numbers[i];
        numbers[i] = temp;
        i++;
        j--;
    }

    cout << endl << endl << "The contents of \"numbers\" after swapping is: " << endl;
    displayArray(numbers, MAXSIZE);

    cout << endl << "Now, lets sort the array from smallest to largest using a bubble sort..." << endl;
    cout << "We can see the array is in the worst sort order; i.e., every element in the array must move." << endl;
    cout << "The bubble sort is most inefficient for this \"unsorted\" array of all the sort algorithms." << endl
    << "It takes O[(n2)] to sort the array.  There are better ways to sort..." << endl << endl;

    bubbleSort2(numbers, MAXSIZE);

    cout << endl << endl << "The contents of \"numbers\" after sorting is: " << endl;
    displayArray(numbers, MAXSIZE);

    cout << "Let's go over a simple 2-D array..." << endl << endl;

    string students[MAXROWS] =
            {
                    { "Homer" },
                    { "Marge" },
                    { "Bart" },
                    { "Lisa" },
                    { "Maggie" }
            };

    double grades[MAXROWS][MAXGRADES] =
            {
                    { 0, 0, 5, 0, 7 },		 // Homer's grades
                    { 50, 60, 70, 80, 90 },  // Marge's grades
                    { 30, 40, 30, 40, 50 },	 // Bart's grades
                    { 99, 100, 99, 98, 99 }, // Lisa's grades
                    {70, 80, 90, 80, 70}	 // Maggie's grades
            };
    //
    // change Homers 3rd test grade...
    //
    grades[0][2] = 3;
    //
    // change bart's 5th test grade...
    //
    grades[2][4] = 0;
    //
    // print out the class grades...
    //
    printGrades(students, grades);
    return 0;
}

