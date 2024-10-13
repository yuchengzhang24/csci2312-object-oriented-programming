#include "Student.h"
#include <iostream> 
using namespace std; 

Student::Student(){

}

Student::Student(string aFirstName, string aLastName, int aStudentID){
    firstName = aFirstName;
    lastName = aLastName;
    studentID = aStudentID;
}

const string Student::getFirstName(){
    return firstName;
}
void Student::setFirstName(string aFirstName){
    firstName = aFirstName;
}

const string Student::getLastName(){
    return lastName;
}
void Student::setLastName(string aLastName){
    lastName = aLastName;
}

const int Student::getStudentID(){
    return studentID;
}
void Student::setStudentID(int aStudentID){
    studentID = aStudentID;
}

const float Student::getGrades(){
    return grades[10];
}
void Student::setGrades(){
    int gradeCounter = 0;
    float gradeInput;
    cout << "Enter a grade. Enter '-1' when complete." << endl;
    while (gradeCounter < 10){
        cin >> gradeInput;
        if (gradeInput != -1){
            grades[gradeCounter] = gradeInput;
            gradeCounter++;
        }
        else{
            break;
        }
    }
    numberOfScores = gradeCounter;
}

const int Student::getNumberOfScores(){
    return numberOfScores;
}

const float Student::getGPA(){
    return GPA;
}

float Student::calculateGPA(){
    float gradeSum = 0.0;
    int i;
    for(i=0; i < numberOfScores; i++){
        gradeSum += grades[i];    
    }
    GPA = gradeSum/numberOfScores;
}

void Student::displayStudent(){
    cout << "Student name: " << firstName << " " << lastName << "." << endl;
    cout << "Student ID: " << studentID << endl;
    cout << firstName << "'s average score is: " << GPA << " across " << numberOfScores << " grades." << endl;
}

void Student::setStudent(string aFirstName, string aLastName, int aStudentID){
    setFirstName(aFirstName);
    setLastName(aLastName);
    setStudentID(aStudentID);
}
