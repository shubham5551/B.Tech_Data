#include <stdio.h>
#include <stdlib.h>

// Structure to store employee details
struct Employee {
    char name[101];   // Employee name
    int age;          // Employee age
    float salary;     // Employee salary
};

int main() {

    int n;                    // Number of employees
    int i;
    int maxIndex = 0;         // Index of employee with highest salary

    // Read number of employees
    scanf("%d", &n);

    // Dynamically allocate memory for n employees
    struct Employee *emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    // Read employee details
    for (i = 0; i < n; i++) {
        scanf("%s %d %f",
              emp[i].name,
              &emp[i].age,
              &emp[i].salary);
    }

    // Print details of all employees
    for (i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Salary: %.2f\n",
               emp[i].name,
               emp[i].age,
               emp[i].salary);
    }

    // Find employee with highest salary
    for (i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Print employee with highest salary
    printf("Highest Salary -> Name: %s, Age: %d, Salary: %.2f",
           emp[maxIndex].name,
           emp[maxIndex].age,
           emp[maxIndex].salary);

    // Free dynamically allocated memory
    free(emp);

    return 0;   // End of program
}
