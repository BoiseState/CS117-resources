//Lecture 2 for Week 3 Chapter 3 CS117
#include <iostream>

using namespace std;

int main() {
    cout << "Build a bridge to Hawaii load calculator" << endl;
    float low, high, field;
    cout << "Enter in the low value" << endl;
    cin >> low;
    cout << "Enter in the high value" << endl;
    cin >> high;
    cout << "Enter in the value from the field" << endl;
    cin >> field;

    if (field >= low && field <= high) {
        cout << "Congrats your bridge to Hawaii will NOT fall down" << endl;
    } else {
        cout << "YOU WILL ALL DIE!!!" << endl;
    }
    return 0;
}