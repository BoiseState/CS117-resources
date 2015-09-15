//Lecture 1 for Week 3 Chapter 3 CS117
#include <iostream>

using namespace std;

int main() {
    //declare space to store our homework grades.
    int hw1, hw2, avg;

    //declare space to store the answer from the user
    string res;

    //Set all our variables to 0 so we are in a clean state
    hw1 = 0;
    hw2 = 0;


    cout << "Welcome to our grade calculator " << endl;
    cout << "------------------------------- " << endl;
    cout << "Would you like to enter a grade for hw1 [yes/no]?" << endl;

    //1. First we need to get the users answer.
    cin >> res;
    //cout << res;

    //2. Check to see if the string entered by the user is == "yes"
    if (res == "yes" || res == "Yes" || res == "YES") {
        //cout << "BOOM yap got herer!";
        //2a. Ask for the grade
        cout << "Well then enter your grade yo!";
        //2b. Assign the users response to the var. hw1
        cin >> hw1;
        // Echo out the grade we got for a warm fuzzy
        cout << "HW1: " << hw1 << endl;
    }

    cout << "Would you like to enter a grade for hw2 [yes/no]?" << endl;

    //1. First we need to get the users answer.
    cin >> res;
    //cout << res;

    //2. Check to see if the string entered by the user is == "yes"
    if (res == "yes" || res == "Yes" || res == "YES") {
        //cout << "BOOM yap got herer!";
        //2a. Ask for the grade
        cout << "Well then enter your grade yo!";
        //2b. Assign the users response to the var. hw1
        cin >> hw2;
        // Echo out the grade we got for a warm fuzzy
        cout << "HW2: " << hw2 << endl;
    }


    //Average out our grades
    avg = (hw1 + hw2) / 2;
    cout << "Your average is: " << avg << endl;


    return 0;
}