#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
  private: 
    string firstName; 
    string lastName;
    int studentID;
    int grades[10];
    int numberOfScores;
    float GPA;
  public: 
    //Constructors
    Student();
    Student (string aFirstName, string aLastName, int aStudentID);
    //Getters 
    const string getFirstName();
    const string getLastName();
    const int getStudentID();
    const float getGrades();
    const int getNumberOfScores();
    const float getGPA();
    //Setters 
    void setFirstName(string aFirstName);
    void setLastName(string aLastName);
    void setStudentID(int aStudentID);
    void setGrades();
    //Other Methods
    void displayStudent();
    void setStudent(string aFirstName, string aLastName, int aStudentID);
    float calculateGPA();
};
 
#endif 