#include <stdio.h>   // Header file for printf() and scanf()

// Defining a structure named Student
// This structure stores data related to a student
struct Student {
    int roll;        // Variable to store roll number of the student
    float marks;     // Variable to store marks of the student
};

// Function definition
// This function takes a structure variable as an argument
// It receives a copy of the structure 'Student'
void display(struct Student s) {

    // Printing roll number and marks of the student
    // %d  -> for integer (roll number)
    // %.2f -> for float with 2 decimal places (marks)
    printf("Roll: %d\nMarks: %.2f\n", s.roll, s.marks);
}

int main() {

    // Creating a structure variable and initializing it
    // roll = 101
    // marks = 88.5
    struct Student s1 = {101, 88.5};

    // Calling the display function
    // Passing the structure variable as an argument
    display(s1);

    // return 0 indicates successful execution of program
    return 0;
}

