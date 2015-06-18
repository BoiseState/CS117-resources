//
// Created by forev_000 on 6/17/2015.
//

#include <iostream>
#include "Student.h"

void Student::setMajor(string major) {
    this->major = major;
}

void Student::setStudentID(int id) {
    this->studentID = id;
}

void Student::printPerson() const {
    Person::printPerson();
    cout << "Major: " << major << endl;
    cout << "Student ID: " << this->studentID << endl;
}
