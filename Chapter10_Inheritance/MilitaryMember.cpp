//
// Created by forev_000 on 6/17/2015.
//

#include <iostream>
#include "MilitaryMember.h"


MilitaryMember::MilitaryMember(string branch, string rank,
                               string fname, string lname, char sex, string ssNum) : Person(fname, lname, sex, ssNum)
{
    this->branch = branch;
    this->rank = rank;
}

void MilitaryMember::setBranch(string name) {
    this->branch = name;
}

void MilitaryMember::setRank(string rank) {
    this->rank = rank;
}

void MilitaryMember::printServiceMember() const {
    Person::printPerson();
    cout << "Branch: " << this->branch << endl;
    cout << "Rank:   " << this->rank << endl;
}


