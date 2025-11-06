// Program to find sum of first N natural numbers using while loop
#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum = sum + i;  // Add each number to sum
        i++;            // Increment counter
    }

    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}

