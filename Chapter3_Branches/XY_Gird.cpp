/*
 * Program to implement a simple grid program using a switch statement.
 */
#include <iostream>

using namespace std;

int main() {
    int x=0,y=0;
    char direction;

    cout << "Starting Coordinates (X,Y): (" << x << "," << y << ")..." << endl;
    do
    {
        cout << "Enter the direction: N, S, E, or W (X to exit): "; // what happens when I enter a string?
        cin >> direction;
        switch (direction)
        {
            case 'n':
            case 'N':
                y++;
                break;
            case 's':
            case 'S':
                y--;
                break;
            case 'e':
            case 'E':
                x--;
                break;
            case 'w':
            case 'W':
                x++;
                break;
            case 'x':
            case 'X':
                break;
            default:
                cout << "Error, Choose N, S, E, or W only" << endl;
                break;
        }
        cout << "Updated coordinates: (X,Y): (" << x << "," << y << ")..." << endl;
    }
    while (direction != 'x' || direction != 'X');                    // what's wrong with this line?
    cout << "Final coordinates: (X,Y): (" << x << "," << y << ")...";

    return 0;
}
