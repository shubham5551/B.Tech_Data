/*
Classes and Objects
Problem Statement
Create a class Car that represents a car with a unique twist. The Car class should include properties such as make, model, and year. Additionally, it should have a method getCarAge that calculates the car's age based on the current year input by the user. However, you need to ensure that the car's year of manufacture is validated to be not in the future.


Description
Define a class Car with private properties: make (String), model (String), and year (int).
Include a constructor that initializes these properties.
Create a method getCarAge that calculates the age of the car based on the current year provided by the user.
Ensure the year property is validated to be less than or equal to the current year.
Input Format
String representing the make of the car.
String representing the model of the car.
Integer representing the year of the car.
Integer representing the current year.
Output Format
Integer representing the age of the car.
A message indicating if the year is invalid.


Sample Input:
Toyota 
Corolla 
2015 
2024

Sample Output:
9


*/

#include <iostream>   // Library for input and output
using namespace std;  // So we can use cout, cin without writing std::

/*
   Class Name: Car
   This class represents a car.
   It contains:
   - Data members (make, model, year)
   - Member function (getCarAge)
*/

class Car {
private:
    string make;   // Stores company name of car (Example: Toyota)
    string model;  // Stores model name (Example: Corolla)
    int year;      // Stores manufacturing year

public:

    /*
       Constructor
       A constructor is a special function
       that runs automatically when object is created.
       
       It is used to initialize (assign values to) data members.
    */
    Car(string mk, string mdl, int yr) {
        make = mk;     // Assign make
        model = mdl;   // Assign model
        year = yr;     // Assign year
    }

    /*
       Member Function: getCarAge
       Purpose: Calculate age of the car.
       
       Parameter:
       currentYear → The present year entered by user.
       
       Returns:
       - -1 if manufacturing year is invalid (future year)
       - Otherwise returns calculated age
    */
    int getCarAge(int currentYear) {

        // Validation: Manufacturing year should not be in future
        if (year > currentYear) {
            return -1;  // Invalid case
        }

        // Age formula
        return currentYear - year;
    }
};

int main() {

    // Variables to store user input
    string make;
    string model;
    int year;
    int currentYear;

    /*
       Taking input:
       getline() is used for string input (including spaces)
    */
    getline(cin, make);     // Input car make
    getline(cin, model);    // Input car model
    cin >> year;            // Input manufacturing year
    cin >> currentYear;     // Input current year

    // Creating object of Car class
    Car car(make, model, year);

    // Calling member function to calculate age
    int age = car.getCarAge(currentYear);

    // Checking result
    if (age == -1)
        cout << "Invalid year";   // If year is wrong
    else
        cout << age;              // Print car age

    return 0;   // Program ends
}
