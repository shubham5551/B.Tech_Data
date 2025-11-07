// Print right-angled triangle pattern of stars
/*
Enter number of rows: 5

* 
* * 
* * * 
* * * * 
* * * * * 

*/
#include <stdio.h>

int main() {
    int i, j, rows;

    // take number of rows from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // outer loop for rows
    for (i = 1; i <= rows; i++) {
        // inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}

