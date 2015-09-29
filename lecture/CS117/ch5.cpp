#include <iostream>
#include <vector>

//We are going to take the code we wrote in ch4_5.cpp to use vector's
//instead of arrays.



//1. Lets ask the user how many grades they want to input. DONE!
//2.We will also extend this simple application to allow the user to
//enter the grades in ANY order.
//3. Once we get to streams we will save the grades out to a file.

using namespace std;

int main() {
    int num_hw = 0;
    cout << "How many homework assignments do you have?:";
    cin >> num_hw;
    if (num_hw <= 0) {
        cout << "Well then thanks for playing ... :( " << endl;
        exit(EXIT_SUCCESS);
    }

    //declare a new vector object to store our grades.
    vector<int> hw(num_hw);

    //Set all our variables to 0 so we are in a clean state
    //We want to use the .at method on the vector object so
    //we have safe memory access!
    for (int i = 0; i < num_hw; i++) {
        hw.at(i) = 0;
    }

    cout << "Welcome to our grade calculator (vectors) " << endl;
    cout << "------------------------------- " << endl;

    //declare space to store the answer from the user
    string res;

    int idx;
    do {
        cout << "Enter in the homework number:";
        cin >> idx;
        cout << "Enter the grade for hw" << idx << ":";
        idx--; //idx = idx -1;
        cin >> hw.at(idx);
        while (hw.at(idx) < 0) {
            cout << "You silly goose you need to enter in a postive grade (or 0)" << endl;
            //Fix this bug so we dont have to work on the weekends!!
            cout << "Enter the grade for hw" << idx << ":";
            cin >> hw.at(idx);
        }
        cout << "Do you more grades ... enter dem now? [y/n]:";
        cin >> res;
    } while (res == "y" || res == "Y");


    //2.Loop through all grades and calc and average.
    int avg = 0;
    cout << "You entered the following grades" << endl;
    for (int i = 0; i < num_hw; i++) {
        cout << "hw" << i + 1 << ": " << hw[i] << endl;
        avg += hw.at(i);//avg = avg + hw[i];
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


