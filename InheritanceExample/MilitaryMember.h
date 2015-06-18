//
// Created by forev_000 on 6/17/2015.
//

#ifndef INHERITANCEEXAMPLE_MILITARYMEMBER_H
#define INHERITANCEEXAMPLE_MILITARYMEMBER_H

#include "Person.h"

class MilitaryMember: public Person {

public:
    void setBranch(string name);

    void setRank(string rank);

    void printServiceMember() const;

private:
    string branch;
    string rank;
};


#endif //INHERITANCEEXAMPLE_MILITARYMEMBER_H
