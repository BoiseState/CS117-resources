// DetermineSeason.cpp : Defines the entry point for the console application.
//	Determine the season of the year based on the month and day entered.
//
// Note: no error checking is done
//

#include<iomanip>
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
    int mth, day;
    string season;

    cout << "Enter the month as a number from 1 to 12: ";
    cin >> mth;
    cout << "Enter the day as a number from 1 to 31: ";
    cin >> day;

//	if using switch...

    switch (mth)
    {
        case 1:
        case 2:
        case 3:
            season = "Winter";
            break;
        case 4:
        case 5:
        case 6:
            season = "Spring";
            break;
        case 7:
        case 8:
        case 9:
            season = "Summer";
            break;
        case 10:
        case 11:
        case 12:
            season = "Fall";
            break;
        default:
            break;
    }
    //
    //if (mth == 1 || mth == 2 || mth == 3)
    //{
    //	season = "Winter";
    //}
    //else if (mth == 4 || mth == 5 || mth == 6)
    //{
    //	season = "Spring";
    //}
    //else if (mth == 7 || mth == 8 || mth == 9)
    //{
    //	season = "Summer";
    //}
    //else
    //{
    //	season = "Fall";
    //}
    if (mth % 3 == 0 && day >= 21)
    {
        if (season == "Winter")
        {
            season = "Spring";
        }
        else if (season == "Spring")
        {
            season = "Summer";
        }
        else if (season == "Summer")
        {
            season = "Fall";
        }
        else
        {
            season = "Winter";
        }
    }
    cout << mth << "/" << day << " is in the " << season << " season." << endl;
    return 0;
}

