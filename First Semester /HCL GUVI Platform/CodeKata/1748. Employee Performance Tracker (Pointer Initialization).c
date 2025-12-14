#include <stdio.h>
#include <stdlib.h>   // For malloc() and free()

int main() {

    int n;          // Number of employees
    int m;          // Number of projects
    int i, j;

    // Read number of employees
    scanf("%d", &n);

    // Dynamically allocate memory for employee IDs
    int *empID = (int *)malloc(n * sizeof(int));

    // Read employee IDs
    for (i = 0; i < n; i++) {
        scanf("%d", &empID[i]);
    }

    // Read number of projects
    scanf("%d", &m);

    // Dynamically allocate memory for project weights
    int *weights = (int *)malloc(m * sizeof(int));

    // Read project weights
    for (i = 0; i < m; i++) {
        scanf("%d", &weights[i]);
    }

    /*
      Dynamically allocate memory for performance ratings.
      This is a 2D structure created using pointers.
    */
    int **ratings = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        ratings[i] = (int *)malloc(m * sizeof(int));
    }

    // Read performance ratings for each employee
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &ratings[i][j]);
        }
    }

    // Calculate and print total performance score for each employee
    for (i = 0; i < n; i++) {

        int totalScore = 0;   // Stores total score for current employee

        for (j = 0; j < m; j++) {
            totalScore += ratings[i][j] * weights[j];
        }

        printf("Employee ID %d has a total score of %d\n",
               empID[i], totalScore);
    }

    // Free dynamically allocated memory
    for (i = 0; i < n; i++) {
        free(ratings[i]);
    }
    free(ratings);
    free(weights);
    free(empID);

    return 0;   // End of program
}
