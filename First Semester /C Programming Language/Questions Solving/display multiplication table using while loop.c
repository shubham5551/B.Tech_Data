// Program to display multiplication table using while loop
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);

    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);  // Formula: result = n × i
        i++;  // Increment counter
    }

    return 0;
}

