#include <stdio.h>

// Structure definition
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];   // Array of structures
    int i;

    // Input employee details
    for(i = 0; i < 5; i++)   // ? correct for loop
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n----- Employee Details -----\n");

    for(i = 0; i < 5; i++)   // ? correct for loop
    {
        printf("\nEmployee %d", i + 1);
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s", emp[i].name);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }

    return 0;
}

