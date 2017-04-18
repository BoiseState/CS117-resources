#include <iostream>
#include <cmath>

using namespace std;

bool isNumPalindrome(int num)
{
    bool isPal = false;
    int tenPower = 0;
    double power = 0.0;

    if (num < 10)
        isPal = true;
    else
    {
        while (num / pow(10.0,power) >= 10)
            power++;
        while (num >= 10)
        {
            //double temp = pow(10.0,power);
            //int tenPower = static_cast<int>(temp);
            tenPower = static_cast<int>(pow(10.0,power));
            //
            // what's the result of a decimal integer / {the_current_10power);
            // what's the result of a decimal integer % 10?
            //
            if ((num / tenPower) != (num % 10))
                return false;
            else
            {
                //
                // remove the most significant digit,
                // remove the least significant digit, and
                // since we remove 2 digits from the number
                // reduce our power variable by 2.
                //
                num = num % tenPower;
                num = num / 10;
                power -= 2;
            }
        }
        isPal = true;
    }
    return isPal;
}

int main() {
    int num;
    bool isAPalindrome;

    cout << "Enter a positive whole number (exit with 0): ";
    cin >> num;
    while (num != 0) {
        isAPalindrome = isNumPalindrome(num);
        if (isAPalindrome)
            cout << "The number you entered, " << num << " is a palindrome" << endl;
        else
            cout << "The number you entered, " << num << " is not a palindrome" << endl;
        cout << endl << "Enter a positive whole number (exit with 0): ";
        cin >> num;
    }
    cout << "Exiting..." << std::endl;
    return 0;
}
