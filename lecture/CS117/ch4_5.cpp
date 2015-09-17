//
// Created by Shane K. Panter for CS117.
//
#include <iostream>

using namespace std;

int main() {
    //declare the number of homeworks
    int num_hw = 6;
    //declare space to store our homework grades.
    int hw[num_hw];
    int avg;

    //declare space to store the answer from the user
    string res;

    //The for loop below is doing all this work!
    //hw[0] =0;
    //hw[1] =0;
    //hw[2] =0;
    //hw[3] =0;
    //hw[4] =0;

    //Set all our variables to 0 so we are in a clean state
    for (int i = 0; i < num_hw; i++) {
        hw[i] = 0;
    }

    cout << "Welcome to our grade calculator " << endl;
    cout << "------------------------------- " << endl;


    cout << "Would you like to enter a homework grade [yes/no]?" << endl;
    cin >> res;

    return 0;
}


