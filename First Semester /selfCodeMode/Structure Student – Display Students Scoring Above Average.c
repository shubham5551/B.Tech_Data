// Structure Student – Display Students Scoring Above Average
#include <stdio.h>    // Header file for input/output

// Define structure Student
struct Student {
    int roll;    // Stores roll number
    char name[50];    // Stores student name
    float marks;      // Stores marks
};

int main() {
    int n,i;            // Number of students
    float sum = 0;    // Sum of marks
    float avg;        // Average marks

    printf("Enter number of students: ");
    scanf("%d", &n);  // Read number of students

    struct Student s[n];  // Declare array of structures

    // Input details of students
    for (i = 0; i < n; i++) 
	{

        printf("\nStudent %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);   // Read roll number

        printf("Name: ");
        scanf("%s", s[i].name);    // Read name

        printf("Marks: ");
        scanf("%f", &s[i].marks);  // Read marks

        sum += s[i].marks;         // Add marks to sum
    }

    avg = sum / n;   // Calculate average marks

    printf("\nAverage Marks = %.2f\n", avg);

    // Display students scoring above average
    printf("\nStudents scoring above average:\n");

    for (i = 0; i < n; i++) {
        if (s[i].marks > avg) {
            printf("Roll: %d, Name: %s, Marks: %.2f\n",
                   s[i].roll, s[i].name, s[i].marks);
        }
    }

    return 0;   // End of program
}

