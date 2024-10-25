#include <iostream>

using namespace std; 

// MULTIPLE INHERITANCE 

// Base class: Polygon 
class Polygon{
    protected:
        int numSides;
    public:
        // Constructor for Polygon
        Polygon(int sides) : numSides(sides){}
        // Method to display number of sides 
        void displayNumSides() const{
            cout << "Number of sides: " << numSides << endl;
        }
};

// Another base class: Rectangle
class Rectangle{
    protected: 
        double width, height;
    public:
        // Constructor for Rectangle 
        Rectangle(double w, double h) : width(w), height(h){}
        // Method to calculate the area of the rectangle 
        double area() const{
            return width * height;
        }
        // Method to display dimensions
        void displayDimensions() const{
            cout << "Width: " << width << ", Height: " << height << endl;
        }
};

// Derived Class: Square (inherits from both Polygon and Rectangle)
class Square : public Polygon, public Rectangle {
    public:
        // Constructor for Square 
        Square(double side) : Polygon(4), Rectangle(side, side){}
        // Method to display the side of the square 
        void displaySide() const{
            cout << "Side: " << width << endl; // Since it's a square, width and height are the same
        }
};

int main(){
    // Create a square 
    Square sq(5.0);
    cout << "Square:" << endl;
    // Display information from both base classes 
    sq.displayNumSides();   // From Polygon Class
    sq.displaySide();       // From Rectangle Class
    cout << "Area: " << sq.area() << endl; //From Rectangle Class
    return 0;
}