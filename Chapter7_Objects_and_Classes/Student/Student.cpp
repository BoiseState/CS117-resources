// Student.cpp : Defines the entry point for the console application.
//

#include "student.h"

string Student::setClass(double units)
{
    string studentsClass;
    if (units < 30)
        studentsClass = "Freshman";
    else if (units < 60)
        studentsClass = "Sophomore";
    else if (units < 90)
        studentsClass = "Junior";
    else
        studentsClass = "Senior";
    return studentsClass;
}

void Student::printStudent() const
{
    cout << "Student, " << fname << " " << lname << " (\"" << whatClass << "\")"  << ": " << endl;
    cout << "\tID: \t\t" << studentId << endl;
    cout << "\tMajor: \t\t" << major << endl;
    cout << "\tCurrent Units: \t" << unitsThisSemester << endl;
    cout << "\tTotal Units: \t" << totalUnits << endl;
}
Student::Student(string fname, string lname)
{
    this->fname = fname;
    this->lname = lname;
    this->major = "Undeclared";
    this->unitsThisSemester = 0.0;
    this->totalUnits = 0.0;
    this->studentId = getID();
    this->whatClass = setClass(this->totalUnits);
}

Student::Student(string fname, string lname, string major, double totalUnits)
{
    this->fname = fname;
    this->lname = lname;
    this->major = major;
    this->unitsThisSemester = 0.0;
    this->totalUnits = totalUnits;
    this->studentId = getID();
    this->whatClass = setClass(this->totalUnits);

}

Student::Student(string fname, string lname, double totalUnits)
{
    this->fname = fname;
    this->lname = lname;
    this->major = "Undeclared";
    this->unitsThisSemester = 0.0;
    this->totalUnits = totalUnits;
    this->studentId = getID();
    this->whatClass = setClass(this->totalUnits);

}

double Student::getStudentTotalUnits() const
{
    return this->totalUnits;
}

double Student::getStudentCurrentUnits() const
{
    return this->unitsThisSemester;
}

string Student::getStudentName() const
{
    string temp = this->fname + " " + this->lname;
    return temp;
}

int Student::getStudentID() const
{
    return this->studentId;
}

string Student::getStudentMajor() const
{
    return this->major;
}

string Student::getStudentClass() const
{
    return this->whatClass;
}

void Student::updateMajor(string major)
{
    this->major = major;
}

void Student::updateSemesterUnits(double units)
{
    this->unitsThisSemester = units;
}

void Student::updateTotalUnits(double units)
{
    this->totalUnits = units;
    this->whatClass = setClass(this->totalUnits);
}

void Student::completeSemester()
{
    this->totalUnits = this->totalUnits + this->unitsThisSemester;
    this->unitsThisSemester = 0;
    this->whatClass = setClass(this->totalUnits);
}
/*
 * This destructor does nothing extra when the student object goes out of scope.  In out simple
 * case, the storage for the student class is freed up when going out of scope.
 */
Student::~Student()
{
}
