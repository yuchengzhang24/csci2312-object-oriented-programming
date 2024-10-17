#include <iostream> 
#include <string> 
using namespace std;

class Student {
  private:
    string name;
    int studentID;
    string address; 
  public: 
    //Constructor to initialize the student object 
    Student(const string& name, int studentID, const string& address)
      :name(name), studentID(studentID), address(address){}

    //Overload the << operator for printing
    friend ostream &operator<<(ostream& os, const Student& student){
      os << "Name: " << student.name << '\n';
      os << "Student ID: " << student.studentID << '\n';
      os << "Address: " << student.address << '\n'; 
      return os;
    }
};

int main(){
  //Create a student object
  Student student("John Doe", 12345, "123 Main St, Anytown, USA");

  //Use the overloaded << operator to print the Student object 
  cout << student;

  return 0;
}