// Chapter3Ex.cpp : Example program for Chapter 3
// Errors exits

#include <iostream>



using namespace std;

int main(int argc, char* argv[])
{
    const double TIX_COST = 5.00;

    int age;
    char sex;
    string name;
    int discount;
    //
    //  We could and should do a lot about error checking and I'll leave that up to you to work out.
    //
    cout << "Enter the age of the viewer";
    cin >> age;
    cout << "Enter the sex of the viewer (\"M\" or \"F\")";
    cin >> sex;
    //
    // is "M" equal to 'M'?
    // What is this 'if' statemetn saying?
    //
    if (sex != 'M' || sex != 'F'){
        cout << "I said enter M or F you dodo!";
        //return -1;
    }
    cout << "Enter the viewer's name: ";
    cin >> name;
    if (name.compare("David") == 0){
        cout << "Hello Mr T" << endl;
    }
    discount = 0;
    //
    // does this look right?
    // What would it look like in a flow chart?
    //
    if (age > 75) {
        discount = .75;
    }
    else if (age > 54) {
        discount = .3;
    }
    else if (age <= 13){
        discount = .20;
    }
    else
        discount = .05;
    //
    // Can we put the above if then else statements into a single if statement?
    // What about boolean expressions:
    //			A	B	C	(A && B)	((A && B) || C)
    //
    // say the movie theater is sexist...
    // What is this 'if' statement saying...
    //
    if (sex = 'M' && sex == 'F'){
        discount += .25;  // same as discount = discount + .25
    }

    cout << "The cost for this movie for " << name << " is " << TIX_COST - TIX_COST * discount;
    return 0;
}

