/*
 * Program
 *      ConvertTemp
 *
 * Description
 *      Converts a celsius temperature to fahrenheit and vise versa based on
 *      user choice.  This program utilizes
 *          [] if structure
 *          [] do while
 *          [] character function tolower
 *          [] user defined functions
 *
 * Date
 *      26 SEP 2017
 *
 * Notes
 *      This program might require additional review to ensure it is efficient and
 *      provides a good user experience.
 */

#include <iostream>

using namespace std;


/*
 * Function name
 *      farToCel
 *
 * Function description
 *      converts a fahrenheit number to celsius
 *
 * Inputs
 *      double: temp
  *
 * Outputs / return value(s)
 *      double: The converted temperature  
 *
 * Notes / assumptions
 *      None
 */
double farToCel(double temp)
{
    return (temp - 32) * 5/9;
}

double celToFar (double temp)
{
    return (temp * 9/5)+32;
}

int main() {

    char ans;
    double temp, convertedTemp;

    do
    {
        cout << "Enter 'C' to convert from celsius to fahrenheit OR " << endl <<
                "Enter 'F' to convert from fahrenheit to celsius OR " << endl <<
                "Enter 'X' to exit: ";
        cin >> ans;
        ans = tolower(ans);


        if (ans == 'c')
        {
            cout << "Enter the temperature to convert: ";
            cin >> temp;
            convertedTemp = celToFar(temp);
            cout << "The temperature, " << temp << "C is " << convertedTemp << "F." << endl;
        }
        else if (ans == 'f')
        {
            cout << "Enter the temperature to convert: ";
            cin >> temp;
            convertedTemp = farToCel(temp);
            cout << "The temperature, " << temp << "F is " << convertedTemp << "C." << endl;
        }
        else if (ans != 'x')
        {
            cout << "Enter 'C', 'F', or 'X' only, please." << endl;
        }
    } while (ans != 'x');
    std::cout << "Done." << std::endl;
    return 0;
}
