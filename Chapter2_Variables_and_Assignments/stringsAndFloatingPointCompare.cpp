// String compares & floating point compares

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    double DELTA = .00005;
    string str1 = "hat";
    string str2 = "Cat";
    string str3 = "Cat in the hat";
    string str4 = "Hat";
    string str5 = "CaT";
    string str6 = "Bat in the Belfrie";
    string str7 = "Bat in the     Belfrie";

    int rtnVal = str4.compare(str1);
    cout << "Compare str4 (\"" << str4 << "\") with " << "str1 (\"" << str1 << "\") == " << rtnVal << endl;

    if (str1 < str4)
        cout << "string1 (\"" << str1 << "\") is less than string4 (\"" << str4 << "\")" << endl;
    else
        cout << "string1 (\"" << str1 << "\") is Greater than string4 (\"" << str4 << "\")" << endl;
    cout << endl << endl;

    rtnVal = str2.compare(str3);
    cout << "Compare str2 (\"" << str2 << "\") with " << "str3 (\"" << str3 << "\") == " << rtnVal << endl;

    if (str2 < str3)
        cout << "string2 (\"" << str2 << "\") is less than string3 (\"" << str3 << "\")" << endl;
    else
        cout << "string2 (\"" << str2 << "\") is Greater than string3 (\"" << str3 << "\")" << endl;
    cout << endl << endl;

    rtnVal = str2.compare(str5);
    cout << "Compare str2 (\"" << str2 << "\") with " << "str5 (\"" << str5 << "\") == " << rtnVal << endl;

    if (str2 < str5)
        cout << "string2 (\"" << str2 << "\") is less than string5 (\"" << str5 << "\")" << endl;
    else
        cout << "string2 (\"" << str2 << "\") is Greater than string5 (\"" << str5 << "\")" << endl;
    cout << endl << endl;

    rtnVal = str6.compare(str7);
    cout << "Compare str6 (\"" << str6 << "\") with " << "str7 (\"" << str7 << "\") == " << rtnVal << endl;

    if (str6 < str7)
        cout << "string6 (\"" << str6 << "\") is less than string7 (\"" << str7 << "\")" << endl;
    else
        cout << "string6 (\"" << str6 << "\") is Greater than string7 (\"" << str7 << "\")" << endl;
    cout << endl << endl;

    double x, y;
    x = sqrt(32);
    y = 32;
    cout << "if x == sqrt(32) then x * x == 32, correct?" << endl;
    double ans = y  + DELTA;
    double ans2 = y - DELTA;
    double double;

    if (x * x < y + DELTA || x*x > y - DELTA)
    //if (x*x == 32)
        cout << "Yippe, equality" << endl;
    else
        cout << "Huh, why are these not equal???" << endl;
    cout << fixed << setprecision(22) << "x == " << x << " then x * x == " << x*x << endl;
    cout << "see page 86, \"Common Error 3.3\"" << endl;
    return 0;
}

