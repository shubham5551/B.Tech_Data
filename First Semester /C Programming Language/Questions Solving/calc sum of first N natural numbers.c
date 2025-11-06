// Calculate sum of first N natural numbers.
// Formula: Sum=[N×(N+1)/2]
#include <stdio.h>

int main() 
{
    int i, N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop from 1 to N
    for (i = 1; i <= N; i++) {
        sum = sum + i;  // Add each number to sum
    }

    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}

