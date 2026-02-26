/*

Problem Statement
Create an interface Shape with methods area and perimeter. Implement this interface in two classes: Rectangle and Circle. Each class should have appropriate constructors and methods to calculate the area and perimeter.


Description
Define an interface Shape with methods double area() and double perimeter().
Create a class Rectangle that implements Shape with properties length and width.
Create a class Circle that implements Shape with property radius.
Ensure the Rectangle and Circle classes have constructors to initialize their properties.
Implement the methods area and perimeter in both classes.
Input Format
String representing the shape type (Rectangle or Circle).
If Rectangle, two doubles representing length and width.
If Circle, one double representing radius.
Output Format
Double representing the area of the shape.
Double representing the perimeter of the shape.


Sample Input:
Rectangle
5
10
Sample Output:
Area: 50.0
Perimeter: 30.0

*/

#include <iostream>
#include <iomanip>   // For fixed and setprecision
using namespace std;

/*
    Creating Interface using Abstract Class
*/
class Shape {
public:
    virtual double area() = 0;        // Pure virtual function
    virtual double perimeter() = 0;   // Pure virtual function
};

/*
    Rectangle Class
*/
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Area = length × width
    double area() {
        return length * width;
    }

    // Perimeter = 2 × (length + width)
    double perimeter() {
        return 2 * (length + width);
    }
};

/*
    Circle Class
*/
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Area = πr²
    double area() {
        double pi = 3.141592653589793;   // Defined manually (safe)
        return pi * radius * radius;
    }

    // Perimeter = 2πr
    double perimeter() {
        double pi = 3.141592653589793;
        return 2 * pi * radius;
    }
};

int main() {
    string shapeType;
    cin >> shapeType;

    Shape* shape = NULL;

    if (shapeType == "Rectangle") {
        double length, width;
        cin >> length >> width;
        shape = new Rectangle(length, width);
    }
    else if (shapeType == "Circle") {
        double radius;
        cin >> radius;
        shape = new Circle(radius);
    }

    // Important: Format output exactly like sample
    cout << fixed << setprecision(1);
    cout << "Area: " << shape->area() << endl;
    cout << "Perimeter: " << shape->perimeter() << endl;

    delete shape;

    return 0;
}
