// InheritanceExample.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "MilitaryMember.h"
#include "Student.h"

using namespace std;

int main() {

    Person person ("david","thompson",'M',"123456789");

    //
    // Use the constructors of the base class and the derived class to create the Military Member
    // object...
    //
    MilitaryMember mm1("Air Force", "Private", "John", "Military", 'M', "123-45-6789");
    //
    // Use the default constructor of the student class And the default constructor of the base
    // class to create the student object.
    //
    Student s1;
    //
    // Play with student class
    //
    s1.setFname("Mary");
    s1.setLname("Student");
    s1.setSex('F');
    s1.set_ssNum("213-65-0987");
    s1.setMajor("Electrical Engineering");
    s1.setStudentID(12345);
    s1.printPerson();

    //
    // print out the military member object.
    //
    mm1.printServiceMember();
    mm1.printPerson();
    return 0;
}
