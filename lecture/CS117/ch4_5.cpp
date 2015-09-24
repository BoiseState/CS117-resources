#include <iostream>

using namespace std;

int main() {
    int num_hw = 2;
    //declare space to store our homework grades.
    int hw[num_hw];

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

    //We are going to write a program that asks the user for up to
    //6 grades. The user is going to have to input the grades in order.
    //That means we are going to start at hw1, hw2, ... hwX
    //When the user says they are done will will exit the loop and calc.
    //out the average, show it to the user and then exit.

    cout << "Welcome to our grade calculator " << endl;
    cout << "------------------------------- " << endl;

    //declare space to store the answer from the user
    string res;
    //1.Ask the user if they have any grades to input.
    cout << "Do you have any grades to input [y/n]:";
    cin >> res;

    if (res == "y" || res == "Y") {
        //1a.If step 1 was true then ask for each homework in sequence
        //1a.1 If step 1a was false jump to step 2.
        //1b. Store the data that the user gave us.
        for (int i = 0; i < num_hw; i++) {
            cout << "i=" << i << endl;
            cout << "Please enter the grade for hw" << i + 1 << ":";
            cin >> hw[i];
            //When we are on our last hw we don't want to ask
            //if they have more grades because they don't
            if (i < num_hw - 1) {
                cout << "Do you have more grades to input [y/n]:";
                cin >> res;
                if (res != "y" && res != "Y") {
                    cout << "got here!" << endl;
                    break;
                }
            }
        }
    } else {
        cout << "Your average is 0" << endl;
        cout << "Please try harder, you can do it!!" << endl;
        exit(EXIT_SUCCESS);
    }


    //2.Loop through all grades and calc and average.
    int avg = 0;
    cout << "You entered the following grades" << endl;
    for (int i = 0; i < num_hw; i++) {
        cout << "hw" << i + 1 << ": " << hw[i] << endl;
        avg += hw[i];//avg = avg + hw[i];
    }
    //3.Display the users avg. grade
    avg = avg / num_hw;
    cout << "Your average is: " << avg << endl;
    //4.Display dont worry be happy, if they have a F.
    if (avg <= 69) {
        cout << "You are special and you can do it!!! Keep on trying" << endl;
    }


    return 0;
}


