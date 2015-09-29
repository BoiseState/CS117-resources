//
// Convert the code below to use vectors and count all the numbers 1 -6
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int i = 0;         // Loop counter iterates numRolls times
    int numRolls = 0;  // User defined number of rolls
    int numSixes = 0;  // Tracks number of 6s found
    int numSevens = 0; // Tracks number of 7s found
    int die1 = 0;      // Dice values
    int die2 = 0;      // Dice values
    int rollTotal = 0; // Sum of dice values

    cout << "Enter number of rolls: " << endl;
    cin >> numRolls;

    srand(time(0));

    if (numRolls >= 1) {
        // Roll dice numRoll times
        for (i = 0; i < numRolls; ++i) {
            die1 = rand() % 6 + 1;
            die2 = rand() % 6 + 1;
            rollTotal = die1 + die2;

            // Count number of sixs and sevens
            if (rollTotal == 6) {
                numSixes = numSixes + 1;
            }
            else if (rollTotal == 7) {
                numSevens = numSevens + 1;
            }
            cout << endl << "Roll " << (i + 1) << " is "
            << rollTotal << " (" << die1
            << "+" << die2 << ")";
        }

        // Print statistics on dice rolls
        cout << endl << endl;
        cout << "Dice roll statistics:" << endl;
        cout << "6s: " << numSixes << endl;
        cout << "7s: " << numSevens << endl;
    }
    else {
        cout << "Invalid rolls. Try again." << endl;
    }

    return 0;
}
