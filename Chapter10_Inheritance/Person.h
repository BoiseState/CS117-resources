//
// Created by forev_000 on 6/17/2015.
//

#ifndef INHERITANCEEXAMPLE_PERSON_H
#define INHERITANCEEXAMPLE_PERSON_H

#include <string>
using namespace std;

class Person {
public:

    Person();
    Person(string fname, string lname, char sex, string ssNum);

    void setFname(string name);

    void setLname(string name);

    void setSex(char sex);

    void set_ssNum(string ssNum);

    void printPerson() const;

protected:
    void setColor(string color);

private:
    string color;
    char sex;
    string firstName;
    string lastName;
    string socialSecurityNumber;
};


#endif //INHERITANCEEXAMPLE_PERSON_H
