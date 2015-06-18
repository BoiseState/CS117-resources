//
// Created by forev_000 on 6/17/2015.
//

#include <iostream>
#include "Person.h"


void Person::setFname(string name)
{
    this->firstName = name;
}

void Person::setLname(string name)
{
    this->lastName = name;
}

void Person::setSex(char sex)
{
    this->sex = sex;
}

void Person::set_ssNum(string ssNum)
{
    this->socialSecurityNumber = ssNum;
}

void Person::printPerson() const
{
    cout << "Name: " << this->firstName <<" " << this->lastName <<
                                                 endl;
    cout << "Sex:  " << this->sex << endl;
    cout << "SS #: " << this->socialSecurityNumber << endl;
}

