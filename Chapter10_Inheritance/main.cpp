#include <iostream>
#include <stdlib.h>
#include "MilitaryMember.h"
#include "Student.h"

using namespace std;

int main() {

    MilitaryMember mm1;
    Student s1;
    mm1.setFname("John");
    mm1.setLname("Military");
    mm1.setSex('M');
    mm1.set_ssNum("123-456-7890");
    mm1.setRank("Private");
    mm1.setBranch("Air Force");
    mm1.printServiceMember();
    cout << endl << endl;
    s1.setFname("Mary");
    s1.setLname("Student");
    s1.setSex('F');
    s1.set_ssNum("213-645-0987");
    s1.setMajor("Electrical Engineering");
    s1.setStudentID(12345);
    s1.printPerson();
    return 0;
}