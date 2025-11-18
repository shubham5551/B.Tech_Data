// Multiplication table (1 to 10)

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for numbers 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("Multiplication Table of %d:\n", i);

        // Inner loop to print table up to 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j); // Formula: result = i × j
        }

        printf("\n"); // Blank line after each table
    }

    return 0;
}

