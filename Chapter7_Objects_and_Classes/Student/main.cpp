#include <Student.h>

using namespace std;

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
