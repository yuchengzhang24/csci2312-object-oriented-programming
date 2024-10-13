#include <iostream>
#include "Student.h"
#include "Student.cpp"
using namespace std;

int main(){
    Student student1("Yucheng", "Zhang", 108751651);
    student1.setGrades();
    //student1.calculateGPA();
    student1.displayStudent();
    
}









    /*student1.setStudent("Chris", "Tran", 10044112);
    student1.displayStudent();

    student1.setFirstName("Sam");
    student1.setLastName("Song");
    student1.setStudentID(1003132110);
    student1.displayStudent();
    cout << student1.getFirstName() << endl;*/