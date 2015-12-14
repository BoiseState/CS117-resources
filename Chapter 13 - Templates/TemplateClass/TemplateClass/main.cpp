//
// Template Class example
// from: Zybooks, Programming in C++ section 13
//
#include <iostream>
using namespace std;
//
// Classes require a lot more modification than functions
//      You must include the following line:
//          before the class definition
//          before each mutator/accessor
//          update the mutator/accessor function, parameters, and return type
//      and
//          update the private data members accordingly
//
//      The instantiated objects (in Main) must be updated to reflect the
//      'type' of the object.
//
template<typename TheType>
class TimeHrMn {
public:
    void SetTime(TheType userMin);
    void PrintTime() const;
private:
    TheType hrsVal;
    TheType minsVal;
};

template<typename TheType>
void TimeHrMn<TheType>::SetTime(TheType userMin) {
    minsVal = userMin;
    hrsVal = userMin / 60.0;
    return;
}

template<typename TheType>
void TimeHrMn<TheType>::PrintTime() const {
    cout << "Hours: " << hrsVal << " ";
    cout << "Minutes: " << minsVal << endl;
    return;
}

int main() {
    //
    // here, the objects must be modified to reflect the
    // type of that object object
    //
    TimeHrMn<int> usrTimeInt;
    TimeHrMn<double> usrTimeDbl;

    usrTimeInt.SetTime(135);
    usrTimeInt.PrintTime();

    usrTimeDbl.SetTime(135.0);
    usrTimeDbl.PrintTime();

    return 0;
}
