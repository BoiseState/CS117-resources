//
// Created by DA on 12/31/2016.
//

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

#include <iostream>

using namespace std;

class Student
{
public:
    /*

    Constructors...
    Note: There is no default constructor for Student, it wouldn't make sense in
    this implementation.

    */
    Student(string fname, string lname, string major, double totalUnits);
    Student(string fname, string lname, double totalUnits);
    Student(string fname, string lname);
    /*

    Mutators...

        Update the sudent's total units with param 'units' and update student
        class standing accordingly (Freshman...Senior)
    */
    void updateTotalUnits(double units);
    /*
        Update the sudent's semester units with param 'units'
    */
    void updateSemesterUnits(double units);
    /*
        Complete the semester...
        Update the sudent's total units with student's semester units,
            clear out student's semester units, update student's class standing.
    */
    void completeSemester();
    /*
        Update the sudent's major with param 'newMajor'
    */
    void updateMajor(string newMajor);
    /*

    Assessors...

        Returns the student's total units
    */
    double getStudentTotalUnits() const;
    /*
        Returns the student's current units taken in the semester
    */
    double getStudentCurrentUnits() const;
    /*
        Returns the student's name
    */
    string getStudentName() const;
    /*
        Returns the student's major
    */
    string getStudentMajor() const;
    /*
        Returns the student's class standing
    */
    string getStudentClass() const;
    /*
        Returns the student's ID
    */
    int getStudentID() const; // {return (int)this->totalUnits; };
    /*
        Prints out the student's record
    */
    void printStudent() const;
    /*
     destructor...
     destructors are used to 'clean up' memory when we are done using the 'Student' object; when
     the object goes 'out of scope'.
     We do not be concerned with destructors in this class.  They are used for more complicated
     class.
     If you do include a destructor in your class code it as in this example
    */
    ~Student();


private:
    int studentId;
    string major;
    string fname;
    string lname;
    string whatClass;
    double unitsThisSemester;
    double totalUnits;
    static int lastID;				// this is the last ID in use.  This variable is 'shared' between all objects; i.e., there
    // is only 1 copy of lastID for all students;
    /*
    Private mutators only for execution WITHIN THE CLASS; i.e., these are NOT
    visible to the outside, nor are they 'callable'...

        Returns the next available student ID that isn't being used.
        NOTE: this mutator is in the 'private' section as no one should
        be calling this routine from the outside.
    */
    int getID();
    /*
        Returns the students class level: Freshman, Sophomore, Junior, Senior depending
        on a 30 credit class level; i.e., 0-29 is a Freshman, 30-59 is a Sophomore,
        60-89 is a Junior, and > 90 is a Senior.

        Note:this routine is called whenever the student's totalUnits are updated.
    */
    string setClass(double units);

};

int Student::getID()
{
    int id = lastID;
    lastID++;
    return id;
}

int Student::lastID = 1;		// set the 'shared' variable to 1 to begin with

#endif //PERSON_STUDENT_H
