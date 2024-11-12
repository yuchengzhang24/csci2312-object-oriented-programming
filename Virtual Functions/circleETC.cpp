#include <iostream>
#include <cmath>

using namespace std;

// Base class 
class Shape{
  public:
    virtual void read(istream& in) = 0;
    virtual double area() const = 0;
    virtual void display(ostream& out) const = 0;
};

// Derived class for circle 
class Circle : public Shape{
  private:
    double radius; 
  public:
    void read(istream& in){     // Static Polymorphism
      cout << "Enter Radius: ";
      in >> radius;
    }
    double area() const{
      return M_PI * radius * radius; 
    }
    void display(ostream& out) const{     // Dynamic Polymorphism 
      out << "Circle with radius " << radius;
    }
};

// Derived class for Rectangle 
class Rectangle : public Shape{
  private: 
    double width, height;
  public: 
    void read(istream& in){
      cout << "Enter width and height: ";
      in >> width >> height;
    }
    double area() const{
      return width * height;
    }
    void display(ostream& out) const{
      out << "Rectangle with width " << width << " and height " << height;
    }
};

// Derived class for Triangle
class Triangle : public Shape{
  private:
    double base, height;
  public:
    void read(istream&in){
      cout << "Enter a base and height: ";
      in >> base >> height;
    }
    double area() const{
      return (base * height) * .5;
    }
    void display(ostream& out) const{
      out << "Triangle with base " << base << " and height " << height;
    }
};

// Function to print shape area 
void printArea(Shape* shape){
  shape -> display(cout);
  cout << " has an area of: " << shape -> area() << endl; 
}

// Main function 
int main(){
  Shape* shape = nullptr; 
  int choice; 
  cout << "Choose a shape (1 = Circle, 2 = Rectangle, 3 = Triangle): ";
  cin >> choice;

  if (choice == 1){
    shape = new Circle();
  }
  else if (choice == 2){
    shape = new Rectangle();
  }
  else if (choice == 3){
    shape = new Triangle();
  }
  else{
    cout << "Invalid Choice." << endl; 
    return 1;
  }

  shape ->read(cin);
  printArea(shape);

  return 0;
}