// Student.cpp : Defines the entry point for the console application.
//

#include "student.h"

using namespace std;

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
int main(int argc, char* argv[])
{
    //
    // check constructors...
    //
    Student s1("Homer", "Simpson");
    s1.printStudent();
    Student s2("Lisa", "Simpson",88.0);
    s2.printStudent();
    Student s3("Bart", "Simpson", "Electrical Engineering", 40.0);
    s3.printStudent();
    //
    // now check assessors, mutators...
    //
    cout << endl << endl;
    s1.updateSemesterUnits(12);
    cout << s1.getStudentName() << " is taking " << s1.getStudentCurrentUnits() << " units this semester." << endl;
    s1.completeSemester();
    cout << "Semester completed, " << s1.getStudentName() << " (" << s1.getStudentClass() << ") now has "
         << s1.getStudentTotalUnits() << " units towards his degree." << endl;

    s1.updateSemesterUnits(21);
    cout << s1.getStudentName() << " is taking " << s1.getStudentCurrentUnits() << " units this semester." << endl;
    s1.completeSemester();
    cout << "Semester completed, " << s1.getStudentName() << " (" << s1.getStudentClass() << ") now has "
         << s1.getStudentTotalUnits() << " units towards his degree." << endl;
    cout << s1.getStudentName() << " has changed his major: " << endl;
    string oldMajor = s1.getStudentMajor();
    s1.updateMajor("Mechanical Engineering");
    string newMajor = s1.getStudentMajor();
    cout << "\tFROM: " << oldMajor << endl << "\tTO:   " << newMajor << endl;
    s1.updateTotalUnits(89);
    cout << "Error found in " << s1.getStudentName() << " (ID: " << s1.getStudentID() << "), total units = " <<
         s1.getStudentTotalUnits() << " " << s1.getStudentClass() << " Class " << endl;
    return 0;
}

