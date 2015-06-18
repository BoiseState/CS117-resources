//
// Created by forev_000 on 6/17/2015.
//

#include <iostream>
#include "MilitaryMember.h"

void MilitaryMember::setBranch(string name) {
    this->branch = name;
}

void MilitaryMember::setRank(string rank) {
    this->rank = rank;
}

void MilitaryMember::printServiceMember() const {
    printPerson();
    cout << "Branch: " << this->branch << endl;
    cout << "Rank:   " << this->rank << endl;
}


