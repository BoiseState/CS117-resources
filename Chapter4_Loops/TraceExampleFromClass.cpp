#include <iostream>
using namespace std;

int main() {
    int inputN;
    int sum = 0;
    int x = 5;
    int i = 1;

    cin >> inputN;

    while (i < 5)
    {
        x = x + 1;
        sum = sum + x / inputN;
        cin >> inputN;
        i ++;

    }
    cout << "Sum = " << sum << endl;
     return 0;
}
