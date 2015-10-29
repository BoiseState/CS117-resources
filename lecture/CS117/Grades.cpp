#include <iostream>
#include <vector>
#include <fstream> //So we can write data to a file.

using namespace std;

void writeGradesToFile(vector<int> hw);
vector<int> readGradesFromFile();


int main() {
    int num_hw = 0;
    //declare a new vector object to store our grades.
    vector<int> hw = readGradesFromFile();
    if (hw.size() > 0) {
        num_hw = hw.size();
    } else {
        cout << "How many homework assignments do you have?:";
        cin >> num_hw;
        if (num_hw <= 0) {
            cout << "Well then thanks for playing ... :( " << endl;
            exit(EXIT_SUCCESS);
        }
        hw.resize(num_hw, 0);
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

    writeGradesToFile(hw);

    return 0;
}


void writeGradesToFile(vector<int> hw) {
    ofstream outFS; //get an output stream
    outFS.open("my_grades.txt");
    if (!outFS.is_open()) {
        cout << "Could not open the file for writting" << endl;
        return;
    }

    for (int i = 0; i < hw.size(); i++) {
        outFS << hw.at(i) << endl;
    }
    cout << "Done writing grades to file" << endl;
    outFS.close();
}

vector<int> readGradesFromFile() {
    //Are there any potential problems with this code?
    ifstream inFS;   // Input file stream
    int grade = 0; // File data
    vector<int> rval;
    cout << "Opening file my_grades.txt." << endl;
    inFS.open("my_grades.txt");
    if (!inFS.is_open()) {
        cout << "Could not open file my_grades.txt." << endl;

        return rval;
    }
    inFS >> grade;
    while (!inFS.eof()) {
        cout << "reading in grade: " << grade << endl;
        rval.push_back(grade);
        inFS >> grade;
    }
    cout << "Closing file my_grades.txt." << endl;
    inFS.close();
}