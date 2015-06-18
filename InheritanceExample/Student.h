//
// Created by forev_000 on 6/17/2015.
//

#ifndef INHERITANCEEXAMPLE_STUDENT_H
#define INHERITANCEEXAMPLE_STUDENT_H


#include "Person.h"

class Student : public Person {
public:
    void setMajor(string major);

    void setStudentID(int id);
    //
    // How can this be?  printPerson is an accessor in the
    // base class!
    // The printPerson accessor in this class is 'overridding'
    // the printPerson in the base class.  Therefore an object
    // of type student will call the printPerson in this class.
    // This is also referred to as 'overloading' the printPerson
    // function and is one form of 'polymorphism'
    //
    void printPerson() const;

private:
    string major;
    int studentID;
};


#endif //INHERITANCEEXAMPLE_STUDENT_H
