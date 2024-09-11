#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;


//Declare all data/variables 

class Student{
private:
  string firstName;
  string lastName;
  int studentID;
  //Array to store grades (max 10) 
  int grades[10];
  //Keeps track of the number of grades entered
  int numberOfGrades; 

public:
  //Constructor
  Student(string firstName, string lastName, int studentID);

  //Getters and Setters
  string getFirstName() const; 
  void setFirstName(string fName);

  string getLastName() const;
  void setLastName(string lName);

  int getStudentID() const;
  void setStudentID(int sID);

  int getGrades() const;
  void setGrades();
  
  //
  void addGrade(int grade);

  //Method to count number of grades entered
  int getNumberOfGrades() const;

  //Method to calculate average score 
  double calculateGPA(); 

};


#endif 